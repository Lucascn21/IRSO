/*
Un procedimiento que lea un entero positivo validado. 
Leer varios positivos y mostrar cuantos de ello fueran pares. 
Para ello hacer una función que  reciba un entero y devuelva 1  si el entero fuera par y 0 en caso contrario.
*/
#include <stdio.h>
#include <stdlib.h>


void contarPPares(int &cont);
int esPositivo(int a);


int main(){
	int contPositivos=0;
	contarPPares(contPositivos);
	contarPPares(contPositivos);
	printf("total de positivos pares %d",contPositivos);
	return 0;
}


void contarPPares(int &cont){ 
	int num;
	printf("Dame un numero entero positivo ");
   	scanf("%d", &num);
   	fflush(stdin);
	if(esPositivo(num)==1&&num%2==0)cont++;
	else printf("No es un numero entero, positivo y/o par\n");
}


int esPositivo(int a){
	if(a>0){
		return 1;
	} else {
		return 0;
	}
}



