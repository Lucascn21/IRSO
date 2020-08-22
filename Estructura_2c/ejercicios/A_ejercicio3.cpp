//Un procedimiento que lea y devuelva un entero.
#include <stdio.h>
#include <stdlib.h>



void leerDevolver();



int main(){
	leerDevolver();
	return 0;
}




void leerDevolver(){	
	int num;
	printf("Ingresar numero entero:\n");
    scanf("%d", &num);
	printf("El numero ingresado es: %d",num);
}

