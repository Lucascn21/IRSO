#include <stdio.h>
#include <stdlib.h> // para el system
int main ()
{

int nota1, nota2, nota3, nota4, promedio;


printf("\n Ingrese primer nota ");
fflush(stdin);	
scanf("%d",& nota1);


printf("\n Ingrese segunda nota ");
fflush(stdin);	|
scanf("%d",& nota2);

printf("\n Ingrese tercera nota ");
fflush(stdin);	
scanf("%d",& nota3);

printf("\n Ingrese cuarta nota ");
fflush(stdin);	
scanf("%d",& nota4);

promedio=(nota1+nota2+nota3+nota4)/4;
printf("El promedio es %d \n", promedio);//solo para la prueba de escritorio
if(promedio>100){
	printf("El promedio excede 100");
	fflush(stdin);	
	}else if(promedio>=91)printf("Nota = A");
	else if(promedio>=71)printf("Nota = B");
	else if(promedio>=51)printf("Nota = C");
	else if(promedio>=31)printf("Nota = D");
	else printf("Nota = E");
fflush(stdin); //por si mas  adelante refactorizo y/o agrego cosas



printf("\n\n\n");
system("pause");
return 0;
}
