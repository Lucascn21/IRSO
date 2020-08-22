#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main (){
	
	//Busqueda en un sector cargarlo, pedir al usuario que ingrese valor a buscar
	//2 posibles casos de encontrado, con datos sin repetir, con datos repetidos

	int arreglo[10]={3, 500, 9, 10, 120, 300, 1, 500, 10, 20};
	//si busco el 500 sin repetir, lo encuentro en el indice 1
	//si busco el 10 con repetidos, lo encuentro en 1 y 7
	bool enBusqueda=true;
	int max=0;
	for(int i=0; i<=9; i++)if(arreglo[i]>max)max=arreglo[i];

	
	
	for(int i=0; i<=9; i++)if(arreglo[i]==max)printf("dato: %d  posicion %d \n", max, i);
	
	
	printf("\n Ahora sin repetidos \n");
	system("PAUSE");
	
	int cont=0;
	while(enBusqueda){
	//	printf("Contador: %d numero mayor: %d  valor: %d \n", cont, max ,arreglo[cont]);
		if(arreglo[cont]==max){
			printf("dato: %d  encontrado en posicion %d", max, cont);
			enBusqueda=false;}
			else if(cont>=10){
				printf("dato: %d no encontrado", max);
				enBusqueda=false;}
		cont++;}
	
	
	
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;}
