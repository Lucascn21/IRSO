#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (){

//Ej1 Leer una cadena, visualizar cantidad de letras
	char cad[30];
	int largo;
	float contCad=0, contCadTres=0;
    printf("ingrese una cadena: "); 
    fflush(stdin);
    gets(cad); 
    printf("La cadena es \"%s\" y su length/cantidad de letras es %d\n", cad, strlen(cad));
//Ej1 Leer una cadena, visualizar cantidad de letras

//Ej2 Leer cadenas hasta que aparezca FIN, visualizar porcentaje de cadenas de largo 3
    printf("ingrese una cadena: "); 
	fflush(stdin);
    gets(cad); 
    //Mientras el valor ingresado no sea FIN (MAYUSC), sigo pidiendo cadenas
	while(strcmp(cad,"FIN")!=0){
		contCad++; //Sumo 1 a mi total de cadenas
		if(strlen(cad)==3) contCadTres++; //Si su length es 3, sumo 1 al contador de cadenas de 3 char
	//printf("Cantidad de 3char %d, cantidad de total %d y porcentaje de 3char %0.2f%% \n", contCadTres, contCad,contCadTres/contCad*100); 	
	printf("ingrese una cadena: "); 
	fflush(stdin);
    gets(cad); 
	}
	printf("El porcentaje de cadenas de 3 char es %0.2lf\n",contCadTres/contCad*100);
//Ej2 Leer cadenas hasta que aparezca FIN, visualizar porcentaje de cadenas de largo 3
}
