
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, i, A;
	
	
	printf("donner moi un nomber \n");
	 scanf("%d", &N);
	 
	 
	 for (i= 2; i<= N/2; i++)
	 
	     A = N % i;
	     
	    if(A == 0){
	    	printf("le nombre pas premier");
		}
		else {
			printf("le nombre premier");
		}

	
		   return 0;
}









