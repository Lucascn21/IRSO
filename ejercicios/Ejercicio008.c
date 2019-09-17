#include <stdio.h>
#include <stdlib.h>

int main () {
	
int numero;
int numeroIngresado1, numeroIngresado2;
char charIngresado;
printf("Aries 1");
printf("\nTauro 2");
printf("\nGeminis 3");
printf("\nCancer 4");
printf("\nLeo 5");
printf("\nVirgo 6");
printf("\nLibra 7");
printf("\nScorpio 8");
printf("\nSagitario 9");
printf("\nCapricornio 10");
printf("\nAcuario 11");
printf("\nPiscis 12");


printf("\n Ingrese numero correspondiente:  ");
fflush(stdin);	
scanf("%d %d %d",& numero);

	printf("\n");
	
	if (numero < 0 || numero >12) printf("Numero invalido");
	 else if(numero %4 == 1)printf("Fuego");
	     else if(numero %4 == 2)printf("Tierra");					 	
	         else if(numero %4 == 3)printf("Aire ");					 	
                	else if(numero %4 == 4)printf("Agua");	
                     	 else printf("numero no valido");						 	

					 
fflush(stdin);
printf("\n");

printf("\n\n\n");
system("pause");
return 0;
}

