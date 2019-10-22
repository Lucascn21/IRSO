#include <stdio.h>
#include <stdlib.h>


int main (){
int arr[78];
int aux=40;

for(int i=0; i<=78;i++){
 if(i%2==0){
 	arr[i]=aux;
 }
 	else{
 		arr[i]=i+1;
 		aux--;
	 } 
 }



for(int i=0; i<=78;i++){
	printf("\n i vale: %d y el valor de la posicion correspondiente es %d ",i, arr[i]);
}

return 0;

}

