//Hacer una función que determine si una cadena de caracteres termina  con una letra dada. La letra se pasará por parámetro.
//Luego leer tres cadenas y una letra por cada una e informar si terminan o no con la letra asociada.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Strings in C are arrays of char elements, so we can’t really return a string - we must return a pointer to the first element of the string.
char* funcion(char cad[30], char a);


int main(){
	char nombre[30]="";
	char letra;
	for(int i=0; i<3;i++){
		printf("Ingrese palabra: ",nombre);	
		scanf("%s",&nombre);
		fflush(stdin); 
		printf("Ingrese letra: ",letra);	
		scanf("%c",&letra);
		//printf("nombre: %s, letra: %c\n", nombre,letra);
		printf("%s termina con la letra asociada\n", funcion(nombre, letra));
		printf("\n");
	}
	return 0;
}

	
char* funcion(char cad[30], char a){
	char ultimaLetra = cad[strlen(cad) - 1];
	if(ultimaLetra==a)return "si";
	else return "no";
}

