#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, j;
	
	n=0;
	j=1;
	
	while(n<=4&&j<2)
	n=n+1;
	printf("\n%d - %d\n", n, j);
	
	printf("\nel otro ejercicio :\n");
	n=0;
	j=1;
	do{
		n=n+1;
		printf("\n%d - %d\n", n, j);
	}
	while(n<=3 || j<0);
	
	
	
	printf("\n\n");
	
	printf("\nLKS\n");
	
	n=0;
	j=1;
	do{
		n=n+1;
	printf("\n%d%d", n, j);
	}
	while (n>=3 || j<0);
	
	system("Pause");
	return 0;
}
