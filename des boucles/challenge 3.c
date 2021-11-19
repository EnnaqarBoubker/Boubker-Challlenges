
#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int N, i, A =0;
	
	
	printf("donner moi un nomber \n");
	 scanf("%d", &N);
	 
	 
	 for (i= 1; i<= N; i++){
	 	
	    if(N % i == 0)
	    {
	    A++;
		}
}
	     
	    if(A == 2){
	    	printf("le nombre  premier");
		}
		else {
			printf("le nombre pas premier");
		}

		   return 0;
}









