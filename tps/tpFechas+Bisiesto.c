#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	int dia, mes, anio, ultimDos, primDos;
	bool secular=true, bisiesto=true;
	
	printf("\nIngrese dia, mes, anio, formatos DD/MM/YYYY: \n");
	
	printf("Dia: ");
	fflush(stdin);
	scanf("%d",&dia);
	
		
	printf("Mes: ");
	fflush(stdin);
	scanf("%d",&mes);
	
	
	printf("Anio: ");
    fflush(stdin);
	scanf("%d",&anio);
	
	ultimDos=anio%100; //Busco los dos ultimos numeros del año, para determinar secularidad
    primDos=anio/100; //Los dos primeros digitos del año, debo usarlo para los bisiestos
	printf("\n");
	fflush(stdin);
	
	//valido año debe ser entre 4 cifras
	if(anio<10000&&anio>999){
		printf("anio correcto,");
		switch(ultimDos){
			case 00:
				if(primDos%4!=0)bisiesto=false;
				break;
			default:
				secular=false;
				if(ultimDos%4!=0)bisiesto=false;
				break;
		}	
	//muestro si el año es, o no, secular y bisiesto
	if(secular)printf(" es secular, ");
		else printf(" no es secular, ");
		
	if(bisiesto)printf(" es bisiesto");
		else printf(" no es bisiesto");
	}else printf("\nanio invalido");

	//dia puede estar entre 1 y 31, esto varia en febrero en funcion de si es bisiesto o no.
	if(dia<=31&&dia>=1){// es un dia entre 1 31
    	if(bisiesto==false&&dia>=29&&mes==2)printf("\ndia incorrecto, febrero solo tiene 28 dias en este caso");
    		else if(bisiesto==true&&dia>=30&&mes==2)printf("\ndia incorrecto, febrero solo tiene 29 dias en este caso");
				else printf("\ndia correcto");}
	else printf("\ndia invalido");

	//mes puede ser 1 o 12
	if(mes<=12&&mes>=1)printf("\nmes correcto");
		else printf("\nmes invalido");
		
fflush(stdin);
printf("\n\n\n");
system("pause");
return 0;
}


