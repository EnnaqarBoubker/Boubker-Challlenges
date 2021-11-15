#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float C /*Celsius*/ , F /*Fahrenheit*/;
	
	printf(" Tapez la temperature Fahrenheit : ");
	 scanf("%f", &F);
	 
	C = (F - 32) / 1.8;
	
	if (C <= 5)
	    printf("la sensation ressentie tres froid %.2f", C);
	    
	else if (C >= 10 && C <= 20)
	    printf("la sensation ressentie froid %.2f", C);
	    
	else if (C >= 20 && C <= 35)
	    printf("la sensation ressentie chaud %.2f", C);
	    
	else
	    printf("la sensation ressentie tres chaud %.2f", C);
	    
	    
	
	return 0;
}
