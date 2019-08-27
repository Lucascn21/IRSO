#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float posibleRaiz1, posibleRaiz2;
    float usuarioIngresaRaiz;
    
	printf("ingrese posible raiz :");
	fflush(stdin);
	scanf("%f",&usuarioIngresaRaiz);

	float a=pow(usuarioIngresaRaiz*2, 2), b=usuarioIngresaRaiz*2,c=4;
	
	posibleRaiz1=(-b+sqrt(pow(b,2))-4*a*c)/2*a;
	posibleRaiz2=(-b-sqrt(pow(b,2))-4*a*c)/2*a;
	printf("%f \n %f",posibleRaiz1, posibleRaiz2);
	fflush(stdin);
	if (usuarioIngresaRaiz == posibleRaiz1 || usuarioIngresaRaiz == posibleRaiz2){
	    printf("\nes posible raiz");
	    fflush(stdin);
    }else{
        printf("\nno es posible raiz");
        fflush(stdin);
    }
    
    if(posibleRaiz1==0 || posibleRaiz2==0){
     printf("\nes posible raiz de la parabola");
	    fflush(stdin);
    }else{
        printf("\nno es posible raiz de la parabola");
        fflush(stdin);
    }
    printf("\n\n\n\n");
	system("pause");
	return 0;
}
