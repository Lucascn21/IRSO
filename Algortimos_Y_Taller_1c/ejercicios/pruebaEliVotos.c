#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//proyecto entrega 9/10
// 11/11 segundo parcial


int main (){
	
	//hacer 5 partidos, votos inválidos, quien gano y considerar un empate. bandera -1 para salir
	int partidos[6]={0,0,0,0,0};
	int votacion=1;
	int votoInvalid=0;
	int max=0;
	int i;
	int partidoGanador;
	
	//se hace votacion primarias con numero limitado de votantes
	while (votacion<=10){
	printf("\n ingrese numero del partido a votar : 1, 2, 3, 4, 5: ");
	fflush(stdin);
	scanf("%d",& i);
	partidos[i]++;
	
if (i<=0||i>=6) votoInvalid++;
	else votacion++;
	}
	
//se saca el maximo
for(int i=1; i<=5;i++){
	if(partidos[i]>max){
		max=partidos[i];
		partidoGanador=i;
	}
}
printf("\n Partido : %d tiene la mayoria de votos con %d \n", partidoGanador, max);


	printf("\n\n\n");
	system("PAUSE");
	return 0;
	}
