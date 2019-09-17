// divisible por 4 dice doña rosa. todo terminado en 00 es divisible
//por 00. 1600 es bisiesto pero 1800 no. cada 4 años se le agrega 1 año.
//cada x centurias tambien hay una diferencia. el algoritmo correcto es
//el siguiente dividir años en 2 categorias, seculares y no seculares .
//viene de seculo que es cien. son los que terminan en 00. no seulares
//ver divisibilidad por 4 de los ultimos 2 digitos. si es secular me
//fijo la divisibilidad de los dos primeros por 4



#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int anio, ultimDos, primDos;
	
	printf("\nIngrese una fecha de 4 cifras: ");
    fflush(stdin);
	scanf("%d",&anio);
	ultimDos=anio%100; //Busco los dos ultimos numeros del año, para determinar secularidad
    primDos=anio/100; //Los dos primeros digitos del año, debo usarlo para los bisiestos
	printf("\n");
	fflush(stdin);
	
	if(anio<10000&&anio>999){
		switch(ultimDos){
			case 0:
				printf("Secular y ");
				fflush(stdin);
				if(primDos%4==0)printf("Bisiesto");
				else printf("no Bisiesto");
				break;
			default:
				printf("No Secular y ");
				fflush(stdin);
				if(ultimDos%4==0)printf("Bisiesto");
				else printf("no Bisiesto");
				break;
		}	
	}else printf("anio no valido");





fflush(stdin);
printf("\n\n\n");
system("pause");
return 0;
}


