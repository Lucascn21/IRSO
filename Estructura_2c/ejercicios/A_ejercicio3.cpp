//Un procedimiento que lea y devuelva un entero.
#include <stdio.h>
#include <stdlib.h>



void leerDevolver(int &entero);



int main(){
	int entero=0;
	leerDevolver(entero);
	printf("\nentero vale %d", entero);
	return 0;
}




void leerDevolver(int &entero){	
	int num;
	printf("Ingresar numero entero:\n");
    scanf("%d", &num);
	printf("El numero ingresado es: %d",num);
	entero=num;
}

