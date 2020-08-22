#include <stdio.h>
#include <stdlib.h>

int main () {



int uno;
int dos;
int tres;
int cuatro;
int cinco;
int aux1;

uno = 2+4;
dos = 0;
tres = uno + dos;
cuatro = (uno + dos)*2; 
cinco = 4;
aux1 = cuatro;
cuatro = tres;
tres = aux1;
uno = uno + 1;
dos = dos + 2;
cinco = (uno*2+ tres *3) / (cinco + 1);
cinco = 0;
tres = cinco;
uno = uno - cuatro;
dos = cuatro - dos * 2;
tres = 2 * uno + dos / dos;
cuatro = tres + uno;
cinco = tres + cuatro - dos;

printf ("\n %d", uno);
printf ("\n %d", dos);
printf ("\n %d", tres);
printf ("\n %d", cuatro);
printf ("\n %d", cinco);
printf ("\n %d", aux1);

printf ("\n\n\n");

system("Pause");
return 0;

}
