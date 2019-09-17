
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
	
	
	if(anio<10000&&anio>999){
		switch(ultimDos){
			case 0:
				if(primDos%4!=0)bisiesto=false;
				break;
			default:
				secular=false;
				if(ultimDos%4!=0)bisiesto=false;
				break;
		}	
	}else printf("anio no valido");
	
	if(secular)printf("es secular ");
		else printf("no es secular ");
		
	if(bisiesto)printf("es bisiesto");
		else printf("no es bisiesto");

if(dia<=31&&dia>=1){// es un dia entre 1 31
    if(bisiesto==false&&dia==28&&mes==2)printf("no es bisiesto, pusiste 28 de febrero '2''");
}

	else printf("\n dia incorrecto");

if(mes<=12&&mes>=1)printf("\n mes correcto");
	else printf("\n mes incorrecto");

	

fflush(stdin);
printf("\n\n\n");
system("pause");
return 0;
}


