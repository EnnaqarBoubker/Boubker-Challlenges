
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float C, F;
	
	printf("donner moi la valeur de Fahrenheit: ");
	 scanf("%f", &F);
	 
	C = (F - 32) / 1.8;
	
	
	
	if (C <= 1)
	 printf("\n tres froid %.2f",C);
	 
	else if(C <= 10)
	 printf("\n froid %.2f", C);
	 
	else if(C <= 38)
	 printf("\n chaud %.2f",C);
	 
	 else 
	 printf("\n tres chaud %.2f",C);        
	 
	
	 
	 
	 return 0;
	
}
