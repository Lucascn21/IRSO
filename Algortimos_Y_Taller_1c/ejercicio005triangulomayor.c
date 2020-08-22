#include <stdio.h>
#include <stdlib.h>

int main () {
float base1;
float altura1;
float superf1;
float base2;
float altura2;
float superf2;

printf("Ingrese base de su primer triangulo \n");
fflush(stdin);
scanf("%f",& base1);

printf("Ingrese altura de su primer triangulo \n");
fflush(stdin);
scanf("%f",& altura1);

printf("Ingrese base de su segundo triangulo \n");
fflush(stdin);
scanf("%f",& base2);

printf("Ingrese altura de su segundo triangulo \n");
fflush(stdin);
scanf("%f",& altura2);

superf1 = base1 * altura1;
superf2 = base2 * altura2;

printf("\n La superficie de su primer triangulo es:%f", superf1);
printf("\n La superficie de su segundo triangulo es:%f", superf2);
fflush(stdin);

if(superf1>superf2)
	printf("\nEl triangulo primero es mayor");
		if(superf1==superf2)
		printf("\n son iguales");
        	else 
printf("\nEl triangulo segundo es mayor");
	




printf("\n\n\n ");

system("pause");
return 0;
 }
