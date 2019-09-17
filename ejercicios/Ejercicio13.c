



//b
//positivos 100 200 300 400 500 600 700 800 900 1000

//c
//positivos 2 4 6 8 ... 20

//d
//positivos 1 3 5 7 9 11 ... 19

//e 
//positivos 5 10 15 20 25 30 35 ... 50

//2) Leer 10 nros, visualizar cuantos son pares
//3) Leer 10 numeros, visualizar porcentaje de numeros que terminan en 23
//4) leer 10 numeros, visualizar la suma de todos ellos



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//1) visualizar las siguientes series
//negativos 54321
//0
//positivos 12345
int main () {
	printf("\nDe -5 a 5 \n");	
	int x=-5;
	int num1,nPares=0, total=0;
	float numRestoVt;
	while(x<=5){
		printf("%d \n",x);	
			x++;
	}
	
		printf("\nDe 100 a 1000, paso 100 \n");	
	 x=100;
	while(x<=1000){
		printf("%d \n",x);	
			x+=100; // x=x+100;
	}
	
			printf("\nDe 2 a 20, paso 20 \n");	
	 x=2;
	while(x<=20){
		printf("%d \n",x);	
			x+=2; // x=x*2;
	}
	
	printf("\nDe 1 a 19, paso 2 \n");	
	 x=1;
	while(x<=19){
		printf("%d \n",x);	
			x+=2; // x=x+2;
   } 
	
	printf("\nDe 5 a 50, paso 5\n");	
	 x=5;
	while(x<=50){
		printf("%d \n",x);	
			x+=5; // x=x+5;
	}
	
	printf("\nDame 10 numeros, te digo cuantos son pares\n");	
	 x=0;

	while(x<10){
		printf("Ingresa numero %d de 10, hay %d numeros pares \n",x, nPares);	
			fflush(stdin);
			scanf("%d",&num1);
			x++;
			if(num1%2==0)nPares++;
	}
	printf("Hay %d numeros pares\n",nPares);
		
		x=0;
		while(x<10){
		printf("Ingresa numero %d de 10, se visualizara el total de numeros que terminan en 23	 \n",x+1);	
			fflush(stdin);
			scanf("%d",&num1);
			x++;
			if(num1%100==23)numRestoVt++;
			total+=num1;
	}  
	printf(" porcentaje  de numeros terminados en 23: %.2f \n",(numRestoVt*100)/10);
	
	
		total=0;
		x=0;
		while(x<10){
			printf("\nIngresa numero %d de 10, la suma hasta ahora es %d \n",x, total);	
				fflush(stdin);
				scanf("%d",&num1);
				x++;
				total+=num1;
		}
        printf("La suma total es %d", total);


printf("\n");	
system("pause");
return 0;
}

