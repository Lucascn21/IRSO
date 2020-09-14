/*
Un procedimiento que lea un nro impar. 
Leer varios pares de enteros  impares y por cada par mostrar una leyenda aclaratoria dependiendo de cual fuera el mayor.
 Para ello hacer  una función que reciba dos enteros y devuelva el mayor de ambos. 
*/
#include <stdio.h>
#include <stdlib.h>

void pedirImpar(int &num);
int determinarMayor(int a, int b);

int main(){
	int num=0, num2=0;
	pedirImpar(num);
	pedirImpar(num2);
	if(num!=num2)printf("el mayor es %d\n",determinarMayor(num, num2));
	else printf("Son iguales\n");
	pedirImpar(num);
	pedirImpar(num2);
	if(num!=num2)printf("el mayor es %d",determinarMayor(num, num2));
	else printf("Son iguales");
	return 0;
}

void pedirImpar(int &num){
	printf("Dame un numero entero impar ");
   	scanf("%d", &num);
   	fflush(stdin);
	while(num%2==0){
		printf("No era un impar, intenta otra vez: ");
   		scanf("%d", &num);
   		fflush(stdin);
	}
	
}

int determinarMayor(int a, int b){
	if(a>b)return a;
	else return b;
}



