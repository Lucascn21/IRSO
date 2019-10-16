#include <stdio.h>
#include <stdlib.h>
int main () {
	int cant=2, num;
	printf("Ingrese cantidad de numeros que quiere recibir de la serie 2 4 8 16... \n");
	scanf("%d",& num);
	for(int i=1; i<=num; i++){
		printf(" %d ", cant);
		cant*=2;}
	printf("\n");
	system("pause");
}
