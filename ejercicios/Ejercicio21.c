#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	//3)CARGAR UN VECTOR ASI: 0 1 0 2 0 3 0 4 0 5 0 6… LUEGO VISUALIZARLO.
	srand(time(NULL));
	int num=1;
	int arreglo[12];
		for (int i=1; i<=12; i++){
			if(i%2!=0)arreglo[i]=0;
				else arreglo[i]=num++;}
	for(int i=1; i<=12;i++)printf("\ %d", arreglo[i]);
	printf("\n\n\n");
	system("PAUSE");
	return 0;}
