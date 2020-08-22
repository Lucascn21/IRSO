#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//3) Leer 10 numeros, visualizar porcentaje de numeros que terminan en 23



int main () {
	
	int num;
	int contador;
	int percent;
	
	
	while(contador<=10){
		printf("Ingrese numeros\n");	
			fflush(stdin);
			scanf("%d",&num);
			num++;
			contador++;
			while(contador<=10  && num%100==23){
		    percent+=10;
		    printf("\nEl porcentaje es de %d\n", percent);	}

			
	
	
	
	
	
	
	
	
	
printf("\n");	
system("pause");
return 0;
    }
