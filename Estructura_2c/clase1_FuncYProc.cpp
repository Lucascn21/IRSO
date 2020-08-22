//Declaracion de librerias
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------

//Declaracion de Funciones y procedimientos
void pausar();
void mostrar(int a, int b, int c);
int suma(int a, int b);
//---------------------------------------------------


//Funcion Main
int main(){
	int x,y,z;
	x=5;
	y=7;
	z=suma(x,y); //Asignamos el retorno de una funcion
	printf("La suma de %d y %d es %d", x, y, suma(x,y)); //Mostramos los valores de las variables y el retorno de una funcion
	//printf("La suma es %d", suma(x,y)); //Mostramos el retorno  de una funcion
	mostrar(x,y,z); //A traves de un procedimiento, mostramos 3 variables, siendo Z el retorno de una funcion
	pausar(); //Procedimiento que pausa el proceso
	return 0;
}
//---------------------------------------------------


//Funciones y procedimientos
void pausar(){ 
printf("\n");
 system("PAUSE");
}

void mostrar(int a, int b, int c){
 printf("\nLa suma de %d y %d es %d ",a,b,c);
}

int suma(int a, int b){
int res;
res=a+b;
return(res);
}
//---------------------------------------------------

