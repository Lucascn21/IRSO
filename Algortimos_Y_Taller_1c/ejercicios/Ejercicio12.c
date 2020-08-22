
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	int x=0;
	while(x<10){
	printf("Dame un numero menor a 10 \n");
	fflush(stdin);
	scanf("%d",&x);
	printf("%d \n",x);	
	}

	system("pause");
return 0;
}
