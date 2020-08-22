#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main () {
	//leer 20 numeros pares
int num;
	for(int i=0; i<20; i++){
				printf("\n dame numero par: ");
				fflush(stdin);
				scanf("%d",& num);		
					if(num%2!=0)i--;
						else{
							printf("%d es par", num);
							printf("\n numero par %d de 20",i+1);} 
	} 
system("cls");

//leer 10n contar cuantos positivos hay
int contPosi=0;
	for(int i=0; i<10; i++){
					printf("\n dame 10 numeros, te cantidad de positivos: ");
					fflush(stdin);
					scanf("%d",& num);		
					if(num>0)contPosi++;
	} 
printf("\n hay %d numeros positivos!\n",contPosi);
	

	
	
	
system("pause");
return 0;
}
