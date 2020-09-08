//Idem ejercicio anterior pero con un procedimiento.
#include <stdio.h>
#include <stdlib.h>



void productoDe(int a, int b, int &res);




int main(){
	int res=0;
	productoDe(2,5,res);
	printf("\nparametro de salida %d",res);
	return 0;
}


void productoDe(int a, int b,int &res){
	int resultado;
	for(int i=0; i<b;i++){
		resultado+=a;
	}
	printf("%d",resultado);
	res=resultado;
}

