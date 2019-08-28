#include <stdlib.h>
#include <stdio.h>

// Leer un entero visualizar si termina en 23
// leer dos enteros visualizarlos ordenados de menor a mayor
// leer dos enteros visualizar mayor
// leer tres enteros ver de menor a mayor
// leer tres enteros ver el mayor


int main(){
	int c1, c2, c3, c4, c5;
	int s1, s2, s3, s4, s5, s6;
	int num1, num2;
	
	if(c1)printf("s1");
	   else if(c2)printf("s2");
	      else if(c3)printf("s3");
	         else if(c4)printf("s4");
	           else if(c5)printf("s5");
			      else printf("s6");
	        

printf("\n Ingrese valor entero");
fflush(stdin);
scanf("%d", &num1);
if (num1 %100==23)printf("termina en 23");
	else printf("no termina en 23");
	

printf("\n Ingrese valor entero 1 ");
fflush(stdin);	
scanf("%d",& num1);
printf("\n Ingrese valor entero 2 ");
fflush(stdin);	
scanf("%d",& num2);


if(num1>num2){
printf("%d es mayor que %d",& num1, num2);
fflush(stdin);	}
	else  printf("%d es mayor que %d",& num2, num1);


	
	
	
	
	
	
	
	
	
	
	
printf("\n\n\n");
system("pause");
return 0;
}
