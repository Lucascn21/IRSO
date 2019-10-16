#include <stdio.h>
#include <stdlib.h>

int main (){
	int arreglo[10];	
	int contImp;
		for(int i=1; i<=10;i++){
			printf("\nIngrese numero para el arreglo (%d de 10): \n",i);
			fflush(stdin);
			scanf("\n%d",&arreglo[i]);}	
		for(int i=1; i<=10;i++)if(arreglo[i]%2!=0)contImp++; //cantidad de impares}
			printf("\n Impares: %%%d\n",(contImp*100)/10);
	printf("\n\n\n");
	system("PAUSE");
	return 0;
	
	
	

	
	}
	
	
