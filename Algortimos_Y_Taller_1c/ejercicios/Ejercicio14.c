
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdbool.h>

//5) leer Nros hasta que aparezca el 0
//visualizar total de nros significativos
// visualizar cuantos nros fueron multiplos de 5 y cuantos multiplos de 10

// 6) leer nros hasta que aparezca el 0 y el 1

// 7) leer 5 pares de nros, visualizar porcentaje de nros positivos
int main () {
	int num, num1, num2;
	int cont=0;
	int cont2=0;
	int cont3=0;
	
	while (num != 0){
		printf("\n Ingrese un numero \n");
		fflush(stdin);
		scanf("%d",& num);  
		cont ++;
		
		if (num%5 == 0) cont2++;
		  if (num%10 == 0) cont3++;         
	}
	printf("\n Cantidad total nros significativos: %d \n", cont-1);
	
	printf("\n Cantidad total nros multiplos de 5: %d \n", cont2-1);
	
	printf("\n Cantidad total nros multiplos de 10: %d \n", cont3-1);
	
	cont = 0;
	num = 3;
	while (num!=0 && num!=1){
		printf("\n Ingrese un numero \n");
		fflush(stdin);
		scanf("%d",& num);  
	}
	
	
	
	
printf("\n");


cont=0;
while (cont <5 ){
		printf("\n Ingrese par de numeros \n");
		fflush(stdin);
		scanf("%d %d",& num1,& num2);  
		cont ++;
		printf("%d %d", num1, num2);
	}



	
system("pause");
return 0;
}

