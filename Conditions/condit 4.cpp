#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int A, B, C;
	
	printf("tapez le premier Valeure : ");
	 scanf("%d", &A);
	 
    printf("tapez le douxieme Valeure : ");
	 scanf("%d", &B);
	 
	C = A + B;
	
	if(A == B)
	{
		printf("la valeure est : %d", (C *3));
	}
	else {

	    printf("la valeure est : %d", C);
	}   
	
	return 0;
	    
	    
	    
}
