#include <stdlib.h>
#include <stdio.h>

int main(){
int enteroIngresado;

printf("Ingrese un entero, se visualizara si es positivo, negativo o neutro \n");
fflush(stdin);
scanf("%d",& enteroIngresado);
if(enteroIngresado<0){
	printf("es negativo");
	fflush(stdin);
	}else if(enteroIngresado>0){
			printf("es positivo");
			fflush(stdin);
				}else{
				printf("es neutro");
				fflush(stdin);}
printf("\n\n\n");


//leer entero, visualizar si es par, impar neutro
printf("Ingrese un entero, se visualizara si es par, impar neutro \n");
fflush(stdin);
scanf("%d",& enteroIngresado);
if(enteroIngresado%2==0 && enteroIngresado!=0){
	printf("es par");
	fflush(stdin);
	}else if(enteroIngresado%2!=0 ){
			printf("es impar");
			fflush(stdin);
				}else{
				printf("es neutro");
				fflush(stdin);}
printf("\n\n\n");


//leer entero, ver si --es/no es-- multiplo de 3 y multiplo de 7 respectivamente
printf("Ingrese un entero se visualizara si --es/no es-- multiplo de 3 y multiplo de 7 respectivamente\n");
fflush(stdin);
scanf("%d",& enteroIngresado);
if(enteroIngresado%3==0 || enteroIngresado%7==0){
	if(enteroIngresado%3==0)printf("es multiplo de 3, ");
		else printf("no es multiplo de 3, ");
	if(enteroIngresado%7==0)printf("es multiplo de 7");
		else printf("no es multiplo de 7");
}else printf("No es multiplo de 3 ni de 7");

fflush(stdin);
printf("\n\n\n");

//leer entero, ver si pertenece al intervalo 0-100
printf("Ingrese un entero se vera si pertenece al intervalo 0-100 \n");
fflush(stdin);
scanf("%d",& enteroIngresado);
if(enteroIngresado<=100 && enteroIngresado >=0)printf("El numero ingresado pertenece al intervalo [0-100]");
	else printf("El numero ingresado no pertenece al intervalo [0-100]");
fflush(stdin);



printf("\n\n\n");
system("pause");
return 0;
}
