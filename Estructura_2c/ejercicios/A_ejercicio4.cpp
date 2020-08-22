//Una función que reciba dos enteros y devuelva el producto de ambos por sumas sucesivas. 
#include <stdio.h>
#include <stdlib.h>



int productoDe(int a, int b);




int main(){
	printf("%d",productoDe(2,5));
	return 0;
}




int productoDe(int a, int b){
	int retorno;
	for(int i=0; i<b;i++){
		retorno+=a;
	}
return(retorno);
}

