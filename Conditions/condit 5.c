#include<stdio.h>
#include<stdlib.h>
#include<math.h>


	int main()
	{
		int a, b, c, dellta;
		float x1, x2;
		
	printf("tapez la valeure a : ");
	 scanf("%d", &a);
	 
	printf("tapez la valeure b : ");
	 scanf("%d", &b);
	 
	printf("tapez la valeure c : ");
	 scanf("%d", &c);
	 
	dellta = pow(b,2) - (4 * a * c);
	printf("la resultat du dellta est :  %d \n", dellta);
	
	if(dellta > 0)
    	{
	    	x1 = (-b - sqrt(dellta)) / (2 * a);
	    	x2 = (-b + sqrt(dellta)) / (2 * a);
			
			printf("\n la resultat de l'equation est deux solution x1 = %f, x2 = %f \n", x1,x2);
    	}
	else if(dellta == 0)
    	{
	    	printf("la resultat est une  solution unique %f", x1);
		
	    	x1 = (- b) / (2 * a);
	    }
    else 
        printf("la resultat est nul");
        
        
    return 0;
	}
