#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void condensar(int a[]),cNum{
	int sumaP=0;
	for(int i=0; i<cNum;i++){
			sumaP+=a[i];
		//	printf("suma  %d\n", sumaP);
	}


	
}



int main (){
	printf("Cuantos numeros vas a ingresar?: ");
	fflush(stdin);
	scanf("%d",&cantNum);

	int arreglo[cantNum];
	condensar(arreglo, cantNum);
	printf("%d \n", suma);




	system("PAUSE");
	return 0;
}
