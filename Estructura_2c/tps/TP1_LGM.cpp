//Una función que reciba dos enteros y devuelva la división  de ambos por restas sucesivas. 
#include <stdio.h>
#include <stdlib.h>



int divisionEntre(int a,  int b);




int main(){
	printf("Resultado de division: %d",divisionEntre(11,3));
	return 0;
}




int divisionEntre(int a, int b){
	int retorno;
	printf("%d dividido %d \n",a,b);
	while(a>=b	){
		a=a-b;
		retorno++;
	}
	printf("Resto: %d \n",a);
return(retorno);
}

