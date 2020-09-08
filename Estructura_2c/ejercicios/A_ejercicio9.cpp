//Idem ejercicio anterior pero con un procedimiento.
#include <stdio.h>
#include <stdlib.h>



void divisionEntre(int a,  int b);




int main(){
	divisionEntre(11,3);
	return 0;
}




void divisionEntre(int a, int b){
	int resultado;
	printf("%d dividido %d \n",a,b);
	while(a>=b	){
		a=a-b;
		resultado++;
	}
	printf("Resultado: %d  Resto:%d \n",resultado, a);

}

