#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	int dia, mes, anio, ultimDos, primDos;
	bool secular=true, bisiesto=true;
	
	printf("\nIngrese dia, mes, anio a verificar DD/MM/YYYY: \n");
	
	printf("Dia a ingresar: ");
	fflush(stdin);
	scanf("%d",&dia);
	
	printf("Mes a ingresar: ");
	fflush(stdin);
	scanf("%d",&mes);
	
	printf("Anio a ingresar: ");
    fflush(stdin);
	scanf("%d",&anio);
	
	ultimDos=anio%100; 
    primDos=anio/100; 
	printf("\n");
	fflush(stdin);
	

	if(anio<10000 && anio>999){
	printf("Anio correcto");
		switch(ultimDos){
			case 00:
				if(primDos%4 != 0)bisiesto=false;
				break;
			default:
				secular=false;
				if(ultimDos%4 != 0)bisiesto=false;
				break;
		}	
	

	}else printf("\nAnio invalido");

	
	if(dia <=31 && dia >=1){
		if(mes==4||mes==6||mes==9||mes==11 && dia>=31)printf("\nDia incorrecto, este mes no tiene mas de 30 dias");
    	if(bisiesto == false && dia >=29 && mes ==2)printf("\nDia incorrecto, febrero solo tiene 28 dias en un anio bisiesto");
    		else if(bisiesto == true && dia >29 && mes==2)printf("\nDia incorrecto, febrero solo tiene 29 dias en un anio bisiesto");
				else printf("\nDia correcto");}
	else printf("\nDia invalido");

	
	if(mes<=12 && mes>=1)printf("\nMes correcto");
		else printf("\nMes invalido");
		
fflush(stdin);
printf("\n\n\n");
system("pause");
return 0;
}


