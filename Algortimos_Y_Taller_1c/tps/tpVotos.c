#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
  int bajo = -1, alto = 6, voto, contVoto=0, impugnados=0, contOcurrencias=0, ganador=1, ganador2=0; 
  int partidos[7]={0,0,0,0,0,0,0};
  srand(time(0)); 
    /*generador de votos random, de -1 a 6. -1 es fin de la votacion, 0 en blanco,
	1 a 5 voto a partidos, 6+ impugnados. Yo restringi el generador hasta 6.*/
    do{
		contVoto++;
		voto = (rand() % (alto - bajo + 1)) + bajo; 
		switch(voto){
			case -1:
				printf("fin de la votacion, no hay mas votos \n");
				partidos[voto]--;
				break;
			case 0:
				printf("1 voto en blanco, numero de voto: %d \n", contVoto);
				partidos[voto]++;
				break;
			case 1:
				printf("1 voto al partido %d  numero de voto: %d\n", voto, contVoto);
				partidos[voto]++;
				break;		
			case 2:
				printf("1 voto al partido %d  numero de voto: %d\n", voto, contVoto);
				partidos[voto]++;
				break;		
			case 3:
				printf("1 voto al partido %d  numero de voto: %d\n", voto, contVoto);
				partidos[voto]++;
				break;		
			case 4:
				printf("1 voto al partido %d numero de voto: %d\n", voto, contVoto);
				partidos[voto]++;
				break;		
			case 5:
				printf("1 voto al partido %d numero de voto: %d\n", voto, contVoto);
				partidos[voto]++;
			break;
	 	    case 6:
				printf("1 voto al partido %d numero de voto: %d\n", voto, contVoto);
				impugnados++;
				break;	
			default:
				impugnados++;
				printf("1 voto invalido %d numero de voto: %d\n", voto, contVoto);}
    }while(voto!=-1);
 
//total de votos, menos los impugnados
printf("\n Cantidad de votos totales validos %d", (contVoto-impugnados)-1);

//de 0 a 5, indice 0 es en blanco, los demas son votos legitimos a cada partido
for(int i=0; i<=5;i++){
  	if(i==0)printf("\n Votos en blanco = %d", partidos[i]);
  		else printf("\n Votos del partido %d = %d", i,partidos[i]);}
  
//Votos mayores a 6 (en mi random no se generan mayores a 6)
printf("\n Cantidad de votos totales impugnados %d", impugnados);
  
//Por default tomo el primero de los partidos como mayor
int mayor=partidos[1];
//Busco el mayor
	for(int i=2; i<=5;i++){
 		if(partidos[i]>mayor){
 			mayor=partidos[i];
 			ganador=i;}}
 			
//Busco casos en los que se repita el mayor			
	for(int i=1; i<=5;i++){
		//Si el valor de mayor se encuentra en el array, lo cuento
 		if(partidos[i]==mayor){
 			contOcurrencias++;
 		    /*Si mi i actual es diferente a la i correspondiente al ganador, 
			  es porque tengo un "mayor" repetido, guardo la posicion en ganador 2 
			  para mostrar en el empate */
 			if(i!=ganador)ganador2=i;}}
 			
/*Si tengo 1 ocurrencia, no hubo empate ni ballotage
  Si tengo 2 ocurrencias, hubo empate
  Si tengo mas 2 ocurrencias, hubo ballotage*/		 	
if(contOcurrencias==1)printf("\n Gana el partido %d con %d votos", ganador, mayor);
	else if(contOcurrencias==2)printf("\n Empate entre los partidos %d y %d", ganador, ganador2);
		else printf("\n Ballotage");
return 0;
}



  
