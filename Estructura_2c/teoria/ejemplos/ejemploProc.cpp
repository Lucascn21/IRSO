#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void multiplicar(int a, int b, int&c);
void leer_nro(char cade[30],int &a);
void pausar();
int main()
{int x,y, z;
leer_nro("\n Ingrese valor para x: ", x );
leer_nro("\n Ingrese valor para y: ", y );
multiplicar(x,y,z);
printf("\n El producto de %d y %d es %d ",x,y,z );
pausar();
return 0;
}


//---------------------------------------------------
void multiplicar(int a, int b, int&c)
{int i;
c=0;
for(i=1;i<=abs(b);i++)
c=c+a;
if(b<0)
c=c*(-1);
};
//---------------------------------------------------
void leer_nro(char cade[30],int &a)
{
printf("\n %s: ",cade);
fflush(stdin);
scanf("%d", &a);
};
//---------------------------------------------------
void pausar()
{
printf("\n");
system("PAUSE");
};
//---------------------------------------------------

//--------------------------------------------------
