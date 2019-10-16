#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1)CARGAR UN VECTOR, GENERAR OTRO VECTOR QUE SEA EL INVERSO DEL PRIMERO, VISUALIZAR AMBOS
int main (){
	int arreglo[5];
	int arreglo2[5];
	int inverso,  num;
	srand(time(NULL));
		for (int i=1; i<=5; i++){
			arreglo[i]=num=rand()%100+1;
			printf("%d ", arreglo[i]);}
	printf("\n");
		for (int i=5; i>=1; i--){
			arreglo2[i]=arreglo[i];
			printf("%d ", arreglo2[i]);}
printf("\n\n\n");

	
printf("\n\n\n");
system("PAUSE");
return 0;
	
	
	

	
}

