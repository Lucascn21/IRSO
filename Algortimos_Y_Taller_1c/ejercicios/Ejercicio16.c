#include <stdio.h>
#include <stdlib.h>
int main () {
	
	int num;
	/* */
	//Leer numeros hasta que aparezca un 7, visualizar porcentaje de numeros positivos
	printf("Ingrese un numero: ", num);
	scanf("%d",& num);	
	fflush(stdin);
		while(num!=7){
			printf("%d no es 7, ingrese otro: ", num);
			scanf("%d",& num);}
	system("cls");

	//leer 7 nros visualizar porcentaje de nros positivos
	int numPosi=0, total;
	for(int i=0; i<7; i++){
		printf("Ingrese un numero: %d de 7 \n", i+1);
		scanf("%d",& num);	
		fflush(stdin);
		if(num>0)numPosi++;}
	printf("Porcentaje  de numeros positivos %d \n ",(numPosi*100)/7);
	
	system("pause");
	system("cls");
	
	// leer 10 numeros visualizar el mayor
	int mayor=0;
	for(int i=0; i<10; i++){
		printf("Ingrese un numero: %d de 10 \n", i+1);
		scanf("%d",& num);	
		fflush(stdin);
		if(num>mayor)mayor=num;}
	printf("\n El numero mayor es: %d", mayor);

	system("pause");
	system("cls");

	//generar x numeros (ingresa usuario) de la siguiente serie 2 4 8 16 32 64
	int cant=2;
	printf("Ingrese cantidad de numeros que quiere recibir de la serie 2 4 8 16... \n");
	scanf("%d",& num);
	for(int i=1; i<=num; i++){
		printf(" %d ", cant);
		cant*=2;}
	system("pause");
	system("cls");


	//leer 5 numeros que pertenezcan al intervalo [110 - 120] visualizar promedio
	for(int i=0; i<5;i++){
		printf("Ingrese que pertenezcan al intervalo [110 - 120], se han ingresado %d de 5\n", i);
		scanf("%d",& num);	
		fflush(stdin);
		if(num>120||num<110)i--;}
	printf("\n\n\n");
	system("pause");
	return 0;
}
