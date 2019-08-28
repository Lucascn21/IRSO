#include <stdio.h>
#include <stdlib.h> // para el system
int main ()
{

int num1, num2, num3, mayor, menor, entreMenorMayor;

printf("\n Ingrese valor entero 1 ");
fflush(stdin);	
scanf("%d",& num1);
printf("\n Ingrese valor entero 2 ");
fflush(stdin);	
scanf("%d",& num2);


if(num1>num2){
printf("%d es mayor que %d", num1, num2);
fflush(stdin);	}
	else  printf("%d es mayor que %d", num2, num1);


printf("\n Ingrese primer valor entero ");
fflush(stdin);	
scanf("%d",&num1);
printf("\n Ingrese segundo valor entero ");
fflush(stdin);	
scanf("%d",&num2);


if(num1>num2){
	printf("%d es mayor", num1);
	fflush(stdin);}
     else printf("%d es mayor", num2);


printf("\n Ingrese primer valor entero ");
fflush(stdin);	
scanf("%d",&num1);
printf("\n Ingrese segundo valor entero ");
fflush(stdin);	
scanf("%d",&num2);
printf("\n Ingrese tercer valor entero ");
fflush(stdin);	
scanf("%d",&num3);

if(num1>num2)mayor=num1;
	else mayor=num2;
if(mayor<num3)mayor=num3;

if(num1<num2)menor=num1;
	else menor=num2;
if(menor>num3)menor=num3;


if(menor!=num1&&mayor!=num1)entreMenorMayor=num1;
if(menor!=num2&&mayor!=num2)entreMenorMayor=num2;
if(menor!=num3&&mayor!=num3)entreMenorMayor=num3;
printf("\n Numeros de menor a mayor: %d, %d, %d", menor, entreMenorMayor, mayor);
fflush(stdin);
printf("\n Numero mayor: %d", mayor);
fflush(stdin);







	


printf("\n\n\n");
system("pause");
return 0;
}
