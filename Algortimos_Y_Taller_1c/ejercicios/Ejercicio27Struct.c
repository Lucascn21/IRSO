#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct TitemFerreteria{
	char nombre[25],descripcion[70];
	int stock, codigo;
	float precio;
	
	
};


int main(){
	//Generador random 0 a 50 para el stock
  	int bajo = 0, alto = 50, random;
    srand(time(0)); 
  	random = (rand() % (alto - bajo + 1)) + bajo; 
  	
  	//Mi martillo
	struct TitemFerreteria martillo, serrucho, destornillador;
	
	//Inicializo cada variable de mi martillo
	strcpy(martillo.nombre,"Martillo StoneWall ");
	strcpy(martillo.descripcion,"Mango de madera, cabeza de titanio y adamantium");
	martillo.stock=random;
	martillo.codigo=1;
	martillo.precio=15.55;
	
	random = (rand() % (alto - bajo + 1)) + bajo; 
	
	//Inicializo cada variable de mi serrucho
	strcpy(serrucho.nombre,"Serrucho StoneWall ");
	strcpy(serrucho.descripcion,"Agarre de madera, hoja de titanio, dientes de adamantium");
	serrucho.stock=random;
	serrucho.codigo=2;
	serrucho.precio=20.99;
	
	random = (rand() % (alto - bajo + 1)) + bajo; 
	
	//Inicializo cada variable de mi destornillador
	strcpy(destornillador.nombre,"Destornillador StoneWall");
	strcpy(destornillador.descripcion,"Mango de madera, cabeza Phillips");
	destornillador.stock=random;
	destornillador.codigo=3;
	destornillador.precio=10.25;
	/*
	//Muestro mi martillo 
	printf("Nombre: %s, Descripcion: %s \n",martillo.nombre,martillo.descripcion);
	printf("Stock: %d, Codigo: %d, Precio:$%0.2f \n\n",martillo.stock,martillo.codigo,martillo.precio);
	
	fflush(stdout);
	
	//Muestro mi serrucho
	printf("Nombre: %s, Descripcion: %s \n",serrucho.nombre,serrucho.descripcion);
	printf("Stock: %d, Codigo: %d, Precio:$%0.2f \n\n",serrucho.stock,serrucho.codigo,serrucho.precio);
	
	fflush(stdout);
	
	//Muestro mi destornillador
	printf("Nombre: %s, Descripcion: %s \n",destornillador.nombre,destornillador.descripcion);
	printf("Stock: %d, Codigo: %d, Precio:$%0.2f \n\n",destornillador.stock,destornillador.codigo,destornillador.precio);
 */
 
 	//Array de mis variables
	struct TitemFerreteria items[3]={martillo, serrucho,destornillador};
	
	for(int i = 0; i<3;i++ ){
		printf("Nombre: %s, Descripcion: %s, \n Stock: %d, Codigo: %d, Precio:$%0.2f \n\n ",items[i].nombre, items[i].descripcion,items[i].stock,items[i].codigo,items[i].precio);
	} 

	
	return 0;
	
}
