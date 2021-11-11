#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float Mile, Metre;
	
	printf("la distance en Mile: ");
	 scanf("%f",&Mile);
	
	Metre = Mile * 1.609 * 1000;
	
	
	printf("la distance metre est %f", Metre);
	
	return 0;
}
