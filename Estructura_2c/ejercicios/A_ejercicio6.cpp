//Una función que reciba dos enteros y devuelva el mayor de ambos.
#include <stdio.h>
#include <stdlib.h>



int mayorEntre(int a, int b);




int main(){
	printf("%d \n", mayorEntre(5,5)); // Son iguales 5
	printf("%d \n", mayorEntre(1,5)); // El segundo parametro es mayor: 5
	printf("%d", mayorEntre(5,1)); // El primer parametro es mayor: 5
	return 0;
}




int mayorEntre(int a, int b){
	if(a==b){
		printf("Son iguales: ");
		return a;		
	} else if(a<b){
			printf("El segundo parametro es mayor: ");
		return b;	
	} else{
			printf("El primer parametro es mayor: ");
		return a;
	}
}

