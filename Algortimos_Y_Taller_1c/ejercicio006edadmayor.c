#include <stdio.h>
#include <stdlib.h>

int main () {
	
int edad;
	
printf("Ingrese su edad \n");
fflush(stdin);
scanf("%d",& edad);

if(edad>=18){

	printf("\nEres mayor de edad");
	fflush(stdin);
}
else {

	printf("\nNo eres mayor de edad");
	fflush(stdin);
}



printf("\n \n");
system("Pause");
return 0;
}
