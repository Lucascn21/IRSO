#include <stdio.h>
#include <stdlib.h>

int main (){
	int arreglo[10];
	
	for(int i=1; i<=10;i++){
		arreglo[i]=i;
				printf("%d ", arreglo[i]);
	}
	
    printf("\n\n fin del ejercicio 1\n\n");
	system("PAUSE");
	system("CLS");
	
	for(int i=1; i<=10;i++){
		arreglo[i]=0;
			printf("%d ", arreglo[i]);
	}

	
	  printf("\n\n fin del ejercicio 2\n\n");
	  system("PAUSE");
	  system("CLS");
	  	
	  for(int i=1; i<=10;i++){
		arreglo[i]=1;
			printf("%d ", arreglo[i]);
	}
	
	
		printf("\n\n fin del ejercicio 3\n\n");
		system("PAUSE");
		system("CLS");
	
	int num=2;
	
		for(int i=1; i<=10;i++){
		arreglo[i]=num;
		num+=2;
		printf("%d ", arreglo[i]);
	}
	
	
	 printf("\n\n fin del ejercicio 4\n\n");
	 system("PAUSE");
	 system("CLS");
	  
	  	num=1;
		for(int i=1; i<=10;i++){
		arreglo[i]=num;
		num+=2;
			printf("%d ", arreglo[i]);
	}

	
		printf("\n\n fin del ejercicio 5\n\n");
		system("PAUSE");
		system("CLS");
	  

		for(int i=1; i<=10;i++){
		arreglo[i]=i*10;
			printf("%d ", arreglo[i]);
	
	}
	
	
		printf("\n\n fin del ejercicio 6\n\n");
		system("PAUSE");
		system("CLS");
	
	
		for(int i=-5; i<=5;i++){
		arreglo[i]=i;
		printf("%d ", arreglo[i]);
	}
	
	
		printf("\n\n fin del ejercicio 7\n\n");
		system("PAUSE");	
		system("CLS");
		
	
		for(int i=1; i<=10;i++){
			printf("Ingrese numero para el arreglo (%d de 10): ",i);
			fflush(stdin);
			scanf("%d",&arreglo[i]);
			arreglo[0]+=arreglo[i];
		}
		printf("El total es %d: ", arreglo[0]);
		
		printf("\n\n fin del ejercicio 8\n\n");
		system("PAUSE");	
		system("CLS");
	printf("\n\n\n");

	system("PAUSE");
	return 0;
}
