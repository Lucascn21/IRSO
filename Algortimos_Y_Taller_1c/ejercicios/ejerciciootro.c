
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	bool cond1=true, cond2=true, cond3=true, cond4=true, cond5=true;
	int a=5;
	if(cond1)
		if(cond2)
	    	switch(a){
	    		case 1:
	    			printf("s1");
	    			break;
	    		case 2:
	    			printf("s2");
	    			break;
	    		case 3:
	    			printf("s3");
	    			break;
	    		case 4:
	    			printf("s4");
	    			break;
	    		default:
	    			printf("s5");
	    			break;}	
		else if(cond3) printf ("s6");
	else{
		printf("s7");
		printf("s8");
			if (cond4) printf("s9");
				else printf("s10");
		if (cond5) printf ("s11");
	}
	
	
printf("\n\n\n");
system("pause");
return 0;
}
