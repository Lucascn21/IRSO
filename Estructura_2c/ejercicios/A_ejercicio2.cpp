//Idem ejercicio anterior pero con un procedimiento. Utilizar un parámetro de salida.
//En lenguaje C los parámetros de entrada/salida son, en realidad, referencias a variables; es decir, direcciones de memoria donde se encuentra el valor real de la variable./

#include <stdio.h>
#include <stdlib.h>


void sumar(int a, int b, int &res);


int main(){
	int res=0;
	sumar(1,7,res);
	printf("%d",res);
	return 0;
}


void sumar(int a, int b, int &res){
	res=a+b;
};


