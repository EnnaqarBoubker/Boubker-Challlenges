#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N ;
	
	printf("donner moi une Nomber :");
	 scanf("%d", &N);
	 
	 if (N > 0){
	 	printf("le nomber est Positif");
	 }
	 else if (N < 0){
	 	printf("le nomber est Negative");
	 }
	 else
	    printf("Le nomber est Zero");
	    
	    
	return 0;
	 
}
