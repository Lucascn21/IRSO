// Leer una cantidad positiva y luego  leer dicha cantidad de enteros no nulos y por cada uno calcular la suma de valores desde 1 a dicho nro. Ejemplo, si el nro es 4 devolvera 1+2+3+4.


#include <stdio.h>
#include <stdlib.h>



void pedirNumero(int &num);
int sumaValores(int a);




int main(){
	int num=0;
	for(int i=0; i<5;i++){
		pedirNumero(num);
		printf("Cantidad  %d = %d\n", num,sumaValores(num) );
	}
	return 0;
}





int sumaValores(int a){
	int contDivisores=0;
	if(a>0)for(int i=1; i<=a;i++)contDivisores+=i;
	if(a<0)for(int i=-1; i>=a;i--)contDivisores+=i;
	
	return(contDivisores);
}

void pedirNumero(int &num){
	printf("Dame un numero entero no-nulo: ");
   	scanf("%d", &num);
   	fflush(stdin);
	while(num==0){
		printf("No era un numero entero no-nulo, intenta otra vez: ");
   		scanf("%d", &num);
   		fflush(stdin);
	}
}
