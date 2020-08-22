//Idem ejercicio anterior pero con un procedimiento.
#include <stdio.h>
#include <stdlib.h>



void productoDe(int a, int b);




int main(){
	productoDe(2,5);
	return 0;
}




void productoDe(int a, int b){
	int resultado;
	for(int i=0; i<b;i++){
		resultado+=a;
	}
	printf("%d",resultado);
}

