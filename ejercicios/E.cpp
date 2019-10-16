//Cargar matrices y visualizarlas
//   1) 0  0  0  0  0  0  0  0
////    0  0  0  0  0  0  0  0
 //     0  0  0  0  0  0  0  0
//      0  0  0  0  0  0  0  0

//  0  0  0  0  0  0  0  0
//  1  1  1  1  1  1  1  1
//  2  2  2  2  2  2  2  2
//  3  3  3  3  3  3  3  3

//2) Cargar X lecturas de teclado
//visualizar 3ra fila
//visualizar 4ta columna

//3)Cargar x random una matriz cuadrada
//visualizar elementos en diagonal principal

//4)Cargar x random una matriz cuadrada
//Visualizar elementos de diagonal secunadaria


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main (){
	
	int matriz [7] [3];
	
	for (int f = 0; f<=3;f++){
			for (int c= 0; c<=7;c++)
			{
				matriz [f] [c]= 0;
			printf("%d", matriz [f] [c]);
			}
			printf("\n");
	}
	

	
	
printf("\n\n\n");
system("pause");
return 0;
}


