#include<stdio.h>
#include<stdlib.h>

int main () 
{
	float a, b, c, d, somme, moyenne;
	
	printf("donner moi la valeur a :");
	 scanf("%f", &a);
	 
	printf("donner moi la valeur b :");
	 scanf("%f", &b);
	 
	printf("donner moi la valeur c :");
	 scanf("%f", &c);
	 
	printf("donner moi la valeur d :");
	 scanf("%f", &d);
	 
	  somme = (a + b + c + d);
    	printf("la somme est : %.2f \n",somme);
    
      moyenne = somme / 4;
        printf("la moyenne est : %.2f",moyenne);
	  
	
	return 0;
}
