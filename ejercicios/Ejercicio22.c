#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main (){
	
	//Busqueda en un sector cargarlo, pedir al usuario que ingrese valor a buscar
	//2 posibles casos de encontrado, con datos sin repetir, con datos repetidos
	int num;
	int arreglo[10]={3, 5, 9, 10, 120, 300, 1, 500, 10, 20};
	//si busco el 10 sin repetir, lo encuentro en el indice 3
	//si busco el 10 con repetidos, lo encuentro en 3 y 9
	bool enBusqueda=true;
	
	printf("Ingrese valor a buscar: ");
	fflush(stdin);
	scanf("%d",&num);
	
	
	for(int i=0; i<=9; i++){
		if(arreglo[i]==num){
			printf("dato: %d  posicion %d \n", num, i);
			enBusqueda=false;}
			else if(i>=9&&enBusqueda==true)printf("dato: %d no ha sido encontrado \n", num);}
	
	printf("\n Ahora sin repetidos \n");
	system("PAUSE");
	int cont=0;
	while(enBusqueda){
		//printf("Contador: %d numero buscado: %d  valor: %d \n", cont, num ,arreglo[cont]);
		if(arreglo[cont]==num){
		printf("dato: %d  encontrado en posicion %d", num, cont);
		enBusqueda=false;}
			else if(cont>=10){
				printf("dato: %d no encontrado", num);
				enBusqueda=false;}
		cont++;}
	
	
	
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;}
