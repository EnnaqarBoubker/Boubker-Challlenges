#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float Mile, Metre;
	
	printf("la distance en Mile: ");
	 scanf("%f",&Mile);
	
	float km = Mile / 1.609;
	
	Metre = km * 1000;
	
	printf("la distance metre est %.2f", Metre);
	
	return 0;
}
