#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, i;
	int Z = 0;
	
	printf("donner moi un nomber \n");
	 scanf("%d", &N);

	 
	for(i=2; i<= N / 2;i++)
	{
	
		if( N % i == 0){
	    	Z = 2;
	    	break;
	    }
		
	}	
		if(Z == 0){
	
		    printf("le nombre premier");	}
		else{
	
		    printf("le nombre pas premier");	}
	
		   return 0;
}








