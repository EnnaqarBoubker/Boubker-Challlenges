#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float Mile, Metre;
	
	printf("la distance Metre: ");
	 scanf("%f",&Metre);
	
	Mile = (Metre / 1000) * 1.609;
	
	printf("la distance mile est %.7f", Mile);
	
	return 0;
}
