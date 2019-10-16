//consignas tp parciales
//ALGORITMOS - Algoritmo de bisiesto que nos enseño
//TALLER 1 - generar la serie con la cantidad de elementos que ingresa el usuario
//TRAERLO IMPRESO O NO VENIR.
// debe tener caratula con titulo de materia, alumno, profesor y fecha
//porcentaje personas que e gusta a, que le gusta b, que le gusta solo a y que les gusta solo b, personas que le gustan ambos, que no le gustan ambos} 
//PARA TODAS LAS MATERIAS, HAY QUE SACARSE 7 EN UNO DE LOS DOS PARCIALES SI O SI, PARA IR A FINAL.

//soy una encuestadora y tengo que recibir los datos que me da el usuario ( le gusta a, b, a solo, b solo, los dos, ninguno)
//como decido cuando dejo de entrar datos? printf ("desea encuestar persona?"), si le dice que no, fin del ciclo y visualizar los resultados. usar 1 0 o caracteres para los si/no elegidos.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main () {
	int num, contA=0, contB=0, contAB=0, contNada=0, contAUnico=0, contBUnico=0, contTotal=0; //Debo inicalizar en 0 sino empienzan en 1
	
	printf("Desea encuestar a alguien? 1 es si, 0 es no\n");
	scanf("%d",& num);	
	fflush(stdin);

	while(num!=0){
		bool gustaA=true, gustaB=true; //Inicializo en true por cada encuestado
			if(num==1){
				printf("Le gusta a? 1 es si, 0 es no\n");
				scanf("%d",& num);
				fflush(stdin);	
					if(num==1)contA++;
						else gustaA=false;
				printf("Le gusta b? 1 es si, 0 es no\n");
				scanf("%d",& num);
				fflush(stdin);	
					if(num==1)contB++;
						else gustaB=false;
					if(gustaA&&gustaB)contAB++;
					if(gustaA&&!gustaB)contAUnico++;
					if(gustaB&&!gustaA)contBUnico++;
					if(!gustaB&&!gustaA)contNada++;
				contTotal++;}
					else printf("no ha ingresado 1 pero si ha ingresado un numero \n");
		printf("\n");
		printf("Desea encuestar a alguien mas? 1 es si, 0 es no\n");
		scanf("%d",& num);}
//Sin este  IF, se me rompe el programa al querer printear variables sin inicializar(num) y o dividir por cero. Asi que valido que haya al menos 1 encuesta contabilizada
if(contTotal!=0)printf("Porcentaje de gente que le gusta A: %% %d \nPorcentaje de gente que le gusta B: %% %d \nPorcentaje de gente que le gusta AB: %% %d \nPorcentaje de gente que le gusta solo A: %% %d \nPorcentaje de gente que le gusta solo B: %% %d \nPorcentaje de gente que no le gusta ninguno: %% %d \n", (contA*100)/contTotal, (contB*100)/contTotal, (contAB*100)/contTotal,(contAUnico*100)/contTotal,(contBUnico*100)/contTotal,(contNada*100)/contTotal);
system("pause");
return 0;
}
