#include<stdio.h>
#include<stdlib.h>

int main () 
{
	int a, b, somme, soustra, multip, modul ;
	float divis;
	
	printf("donner moi la valeur a");
	 scanf("%d", &a);
	 
	printf("donner moi la valeur b");
	 scanf("%d", &b);
	 
	  somme = a + b;
	  soustra = a - b;
	  multip = a * b;
	  divis = a / b;
	  modul = a % b;
	  
	printf("la Somme est : %d, la soustra est : %d, la multipl est : %d, la division est : %f, la modul est : %d" ,somme, soustra, multip, modul);
	
	
	return 0;
}
