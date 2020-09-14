//Una función que reciba un entero positivo  y devuelva la cantidad divisores que tiene el mismo. Luego leer 5 enteros positivos y por cada uno  mostrar cuantos divisores tiene cada uno.


#include <stdio.h>
#include <stdlib.h>



void pedirNumero(int &num);
int cantDivisores(int a);




int main(){
	int num=0;
	for(int i=0; i<5;i++){
		pedirNumero(num);
		printf("Cantidad de divisores del numero %d = %d\n", num,cantDivisores(num) );
	}
	return 0;
}





int cantDivisores(int a){
	int contDivisores=0;
	//for(int i=1; i<=a;i++)if(a%i==0)printf("%d divisor %d\n", a, i);
	for(int i=1; i<=a;i++)if(a%i==0)contDivisores++;
	return(contDivisores);
}

void pedirNumero(int &num){
	printf("Dame un numero entero positivo: ");
   	scanf("%d", &num);
   	fflush(stdin);
	while(num<=0){
		printf("No era un entero positivo, intenta otra vez: ");
   		scanf("%d", &num);
   		fflush(stdin);
	}
	
}
