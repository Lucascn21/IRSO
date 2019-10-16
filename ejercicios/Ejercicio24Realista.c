#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main (){

  int bajo = -1, alto = 6, voto, contVoto=0, impugnados=0, ganador, ganador2, ganadores; 
  int partidos[7]={0,0,0,0,0,0,0};
  srand(time(0)); 
    bool empate=false;
    /*estructura parecida a un vector, accedo por 2 indices, en lugar de 1 del array. 
	parecido al vector, tiene las mismas caracteristicas pero accedo a traves de dos subindices. 
	el primero valor son la sfilas y el segundo las columnas si mi matriz se llama n  accedo n[fila][columna]*/
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
  		else printf("\n Votos del partido %d = %d", i,partidos[i]);
  }
  
  //Votos mayores a 6 (en mi random no se generan mayores a 6)
  printf("\n Cantidad de votos totales impugnados %d", impugnados);
  
  //inicializo en 0 los ganadores
  ganador2=0;
  ganador=0;
  ganadores=0;
  
  //busco ganador entre los 5 partidos y lo asigno a ganador. Si resulta que el partido que estoy comparando es igual al ganador y ganador no es 0, se dio el caso de que ya tengo un ganador y hay empate, asi que pongo en true la bandera y guardo el segundo ganador
  for(int i=1; i<=5;i++)if(ganador<partidos[i]){
  	ganador=i;
  	ganadores++;
  }
  	else if(ganador==partidos[i]&&ganador!=0&&ganadores<3){
  		ganadores++;
  		empate=true;
		ganador2=i;}
		
	//si hubo empate lo muestro, sino muestro al ganador
	if(empate==false &&ganadores<2){
		printf("\n el ganador fue el partido %d", ganador);} 
			else if(empate==true && ganadores<3){
				printf("\n Hubo empate entre el partido %d y el partido %d", ganador, ganador2);}
				else printf("\n Hubo 3 ganadores o mas, ballotage");
		

	  
  
}
