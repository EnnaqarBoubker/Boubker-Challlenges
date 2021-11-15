#include<stdio.h>
#include<stdlib.h>

int main () 
{
	float F, C;
	
	printf("donner la temperateur de celsius: ");
	 scanf("%f", &C);
	 F = (C * 1.8) + 32;
	 
	printf("la température degre Fahrenheit %.2f" ,F);
	
	
	return 0;
}
