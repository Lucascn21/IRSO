#include <stdio.h>
#include <stdlib.h> // para el system
int main ()
{
	int num1, num2, num3;

printf("\n Ingrese valor entero 1 ");
fflush(stdin);	
scanf("%d",& num1);
printf("\n Ingrese valor entero 2 ");
fflush(stdin);	
scanf("%d",& num2);
printf("\n Ingrese valor entero 3 ");
fflush(stdin);	
scanf("%d",& num3);

if(num1>num2 && num1>num3)
printf("%d es mayor que %d y %d", num1, num2, num3);
   else if(num2>num3) printf("%d es mayor que %d y %d", num2, num3, num1);
	
	else  printf("%d es mayor que %d", num3, num1, num2);




printf("\n\n\n");
system("pause");
return 0;
}
