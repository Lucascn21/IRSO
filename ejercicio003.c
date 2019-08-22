#include <stdio.h>
#include <stdlib.h>

int main () {
	
int altura;
int anchura;
int waltura;
int wanchura;
float superficie;
float rinde;
int costo;

	altura = 5;
	anchura = 10;
	wAltura = 2;
	wAnchura = 4;
	superficie = altura*anchura - wAltura*wAnchura;
	rinde = superficie / 0.8;
	costo = rinde * 350;
	
	printf("\n\nPara pintar %f m2 de pared su costo sera de $ %d", superficie, costo);

	
	printf("\n\n");
	system("Pause");
	return 0;
}
