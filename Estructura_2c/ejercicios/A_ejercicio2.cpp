//Idem ejercicio anterior pero con un procedimiento. Utilizar un parámetro de salida.
//En lenguaje C los parámetros de entrada/salida son, en realidad, referencias a variables; es decir, direcciones de memoria donde se encuentra el valor real de la variable./

#include <stdio.h>
#include <stdlib.h>




void sumar(int a, int b);




int main(){
	sumar(1,7);
	return 0;
}



void sumar(int a, int b){
int	suma=a+b;
 printf("La suma da %d",suma);
}

