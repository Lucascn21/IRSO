#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	//2)CARGAR UN VECTOR, VISUALIZARLO Y MOSTRAR LA SUMA DE LAS CASILLAS PARES Y DE LAS IMPARES.
	srand(time(NULL));
	int arreglo[5];
	int num, impares=0, pares=0; //Sino me sobra 1 numero
		for (int i=1; i<=5; i++){
			arreglo[i]=num=rand()%100+1;		
			printf("\n %d", arreglo[i]);
				if(i%2==0)pares+=arreglo[i];
					else impares+=arreglo[i];}
	printf("\n Suma de pares: %d , impares: %d", pares, impares);
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;}
