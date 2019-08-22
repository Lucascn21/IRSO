#include <stdio.h>
#include <stdlib.h> // para el system
int main ()
{
 char car = '*';
// cuadrado 
printf("\n %13s", "********");
printf("\n %6c %6c", car, car);
printf("\n %6c %6c", car, car);
printf("\n %13s", "********");
printf("\n \n \n \n \n \n");

// triangulo
printf ("%10c", car);
printf ("\n %8c %1c", car, car);
printf ("\n %7c %3c", car, car);
printf("\n %12s", "*******");

// rectangulo con letras adentro
printf("\n \n \n \n");
printf("\n %18s", "****************");
printf("\n %3c %14c", car, car);
printf("\n %3c %s %3c", car,"ALGORITMOS", car);
printf("\n %3c %14c", car, car);
printf("\n %18s", "****************");
printf("\n \n \n \n");


int num1, num2;
float num3, num4;
int suma;
float division;

// visualización de suma
printf("Ingrese primer valor: ");
fflush(stdin);
scanf("%d", &num1);
printf("Ingrese segundo valor: ");
fflush(stdin);
scanf("%d", &num2);
suma=num1+num2;
division=num1/num2;

printf("\t la suma es %d",suma);
printf("\n \n");
printf("\t %4d", num1);
printf("\n \t+ %2d ", num2);
printf("\n \t %3s", "-----");
printf("\n \t%4d", suma);

printf("\n \n \n \n");






 return 0;
}
