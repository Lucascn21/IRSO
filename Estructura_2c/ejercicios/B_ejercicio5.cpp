// Leer 5 enteros y por cada uno de ellos calcular su factorial. Usar una función que calcule el factorial.

#include <stdio.h>
#include <stdlib.h>



void pedirNumero(int &num);
int calcFactorial(int a);




int main(){
	int num=0;
	for(int i=0; i<1;i++){
		pedirNumero(num);
		printf("Factorial de %d es %d", num,calcFactorial(num));
	}
	return 0;
}





int calcFactorial(int a){
	int factorial=1;
	if(a==0)factorial=0;
	for(int i=1;i<=a;i++)if(i<=a)factorial=factorial*i;	
	return(factorial);
}

void pedirNumero(int &num){
	printf("Dame un numero entero: ");
   	scanf("%d", &num);
   	fflush(stdin);
}
