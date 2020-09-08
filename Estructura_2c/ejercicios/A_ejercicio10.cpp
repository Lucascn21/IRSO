//Una función que reciba dos enteros a y b. Que devuelva a elevado a la b.
#include <stdio.h>
#include <stdlib.h>



int elevarNum(int a, int b);




int main(){
	printf("%d \n",elevarNum(2,2)); //4
	printf("%d",elevarNum(2,5));   //32
	return 0;
}




int elevarNum(int a, int b){
	int resultado=a;
		for(int i=0; i<b-1;i++){
			resultado=resultado*a;
		}
	return resultado;
}

