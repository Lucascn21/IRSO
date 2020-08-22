
#include <stdio.h>
#include <stdlib.h> // para el system
int main ()
{

int num1, num2, suma;


printf("\n Ingrese primer valor entero de cuatro cifras ");
fflush(stdin);	
scanf("%d",& num1);

printf("\n Ingrese segundo valor entero de cuatro cifras ");
fflush(stdin);	
scanf("%d",& num2);

suma=num1+num2;
if(suma>9999){
	printf("\n La suma tiene mas de cuatro cifras");
	fflush(stdin);	
}else{
	printf("\n La suma (%d) no tiene mas de cuatro cifras", suma);
	fflush(stdin);	
}



printf("\n\n\n");
system("pause");
return 0;
}
