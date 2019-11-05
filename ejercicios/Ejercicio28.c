#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main (){
	int matriz[4][8], numIngr;
	//Ej 1 cargar con 0's una matriz de 4 filas y 8 columnas
	for(int f=0; f<4;f++){
		for(int c=0; c<8;c++){
			matriz[f][c]=0;}}
	
	for(int f=0; f<4;f++){
		for(int c=0; c<8;c++){
			printf("%d",matriz[f][c]);}
	printf("\n");}
	//Ej 1 cargar con 0's una matriz de 4 filas y 8 columnas
	
	
		
	//Ej 2 cargar con 1's una matriz de 4 filas y 8 columnas
		for(int f=0; f<4;f++){
			for(int c=0; c<8;c++){
				matriz[f][c]=f;}}
				
		printf("\n");
		
		for(int f=0; f<4;f++){
			for(int c=0; c<8;c++){
				printf("%d",matriz[f][c]);}
		printf("\n");}
	//Ej 2 cargar con 1's una matriz de 4 filas y 8 columnas
	
	printf("\n");
	
	
	//Ej 3 cargar el array por teclado, mostrar fila 3 y columna 4
	//Carga por teclado
		for(int f=0; f<4;f++){
			for(int c=0; c<8;c++){
				printf("Ingrese numero para la columna %d de 8,  de la fila %d de 4 \n", c+1,f+1);
				scanf("%d",&numIngr);
				fflush(stdin);
				matriz[f][c]=numIngr;}}
	//Carga por teclado			
	printf("\n");
    /*
 	//Muestro la matriz
	for(int f=0; f<4;f++){
		for(int c=0; c<8;c++){
			printf("%d",matriz[f][c]);}
		printf("\n");
	}
	printf("\n");
	//Muestro la matriz
	*/
	
	//Muestro la fila 3
		printf("Fila 3: ");
		//Muestro la fila 3
	for(int c=0; c<8;c++){
		printf("%d ",matriz[2][c]);}	
	//Muestro la fila 3	
		
	printf("\n");
	
	//Muestro la columna 4
	printf("Columna 4: ");
	for(int f=0; f<4;f++){
		printf("%d ",matriz[f][3]);}
	//Muestro la columna 4
	//Ej 3 cargar el array por teclado, mostrar fila 3 y columna 4	
	

	printf("\n");
	system("PAUSE");
	return 0;
}
