// Un procedimiento que reciba dos enteros e imprima el menor de ellos.
#include <stdio.h>
#include <stdlib.h>



void menorEntre(int a, int b);




int main(){
	menorEntre(5,5); // Son iguales 5
	menorEntre(1,5); // El segundo parametro es mayor: 5
	menorEntre(5,1); // El primer parametro es mayor: 5
	return 0;
}




void menorEntre(int a, int b){
	if(a==b){
		printf("\nSon iguales: %d y %d",a,b);
	} else if(a<b){
			printf("\nEl primer parametro es menor: %d",a);
	} else{
			printf("\nEl segundo parametro es menor: %d",b);
	}
}

