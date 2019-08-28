#include <stdlib.h>
#include <stdio.h>

// Veterinaria


int main(){
int numeroCliente;

char tipoDeAnimal; //C es pequeño, M mediano, G grande
char sexo; //H es hembra, M es macho
char largoDePelo; //C corto, M mediano, L largo


printf("Ingrese numero de cliente");
fflush(stdin);	
scanf("%d",& numeroCliente);

printf(" Ingrese tamanio de animal: C pequenio / M mediano / G grande \n");
fflush(stdin);	
scanf("%c",& tipoDeAnimal);

printf(" Ingrese sexo de animal: H hembra / M macho \n");
fflush(stdin);	
scanf("%c",& sexo);

printf(" Ingrese largoDePelo de animal: C pequeño / M mediano / L largo \n");
fflush(stdin);	
scanf("%c",& largoDePelo);



if(tipoDeAnimal=='g'&&sexo=='h'&&largoDePelo=='c'){
	printf("Se ha ganado banio gratis");
	fflush(stdin);}



printf("\n\n\n");
system("pause");
return 0;
}
