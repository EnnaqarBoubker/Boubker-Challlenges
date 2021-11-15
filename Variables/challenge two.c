#include<stdio.h>
#include<stdlib.h>


int main () 
{
	float F, C;
	
	printf("donner la temperateur de Fahrenheit: ");
	 scanf("%f", &F);
	 C = ( F - 32 ) / 1.8;
	printf("la température degre celsius %.2f" ,C);
	
	
	return 0;
}
