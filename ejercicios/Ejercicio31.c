#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main (){
	int peso=0, edad=0,cantPer, totPers=0;
	
	//Lo necesito en 0 para que no ponga cualquier valor
	int matriz[5][5]={0};
	
	printf("Cuantas personas vas a ingresar?: ");
	fflush(stdin);
	scanf("%d",&cantPer);
	for(int i=0; i<cantPer; i++){
		printf("Ingresar edad de la persona %d?: ", i+1);
		fflush(stdin);
		scanf("%d",&edad);
		printf("Ingresar peso de la persona %d?: ", i+1);
		fflush(stdin);
		scanf("%d",&peso);
		printf("\n");
			
		//Edad maneja mi fila, peso mi columna de la matriz
		int f=0, c=0;
		//No contabilizo edad negativa
		if(edad>=0){
			if(edad<=5)c=0;	        //edad entre 0-5
				else if(edad<=10)c=1;	//edad entre 6-10
					else if(edad<=25)c=2;	//edad entre 11-25
						else if(edad<=50)c=3;	//edad entre 26-50
							else if(edad>50)c=4;} 	//edad entre 50+
		//No contabilizo peso negativo
		if(peso>=0){
			if(peso<=15 && peso>=0)f=0;               //peso entre 0-15
				else if(peso<=30)f=1;                 //peso entre 16-10
					else if(peso<=50)f=2;             //peso entre 31-50
						else if(peso<=80)f=3;         //peso entre 51-80
							else if(peso>80)f=4;}     //peso entre 80+

	//Una vez que determine peso y edad de la persona le sumo 1 a la posicion correspondiente.	
	matriz[f][c]+=1;
	//Cuento a cada ingresado.
	totPers++;}

	int acumulador=0;
	//Personas entre 6 y 10 anios
	for(int f=0;f<5;f++){
		acumulador+=matriz[f][1];}	
	printf("%d%% persona/s entre 6 y 10 anios \n", acumulador*100/totPers);
	
	acumulador=0;
	//Peso entre 31 y 50 kg
	for(int c=0;c<5;c++){
		acumulador+=matriz[2][c];}	
	printf("%d%% persona/s entre 31 y 50 kg \n", acumulador*100/totPers);
		
	//Peso entre peso 16-30kg y edad 10-25.
	printf("%d%% persona/s entre 31 y 50 kg y edad entre 10-25 \n", matriz[1][2]*100/totPers);

	acumulador=0;
	//Edad 11-50, peso 16-80
	for(int f=1;f<=3;f++){
		for(int c=1;c<=3;c++){
			acumulador+=matriz[f][c];}}	
	printf("%d%% persona/s entre 11 y 50 anios, pesando 16-80 kg \n", acumulador*100/totPers);
	system("PAUSE");
	return 0;
}


