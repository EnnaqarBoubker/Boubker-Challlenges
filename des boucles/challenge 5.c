#include<stdio.h>
#include<stdlib.h>
	int add(int a, int b)
	{
		int add = a + b;
		return add;
	}
	
	int main ()
	{
		int a, b;
		printf("donner la valeur a : ");
		 scanf("%d", &a);
		 
		printf("donner la valeur b : ");
		 scanf("%d", &b);
		 
		printf("la somme est %d",add(a,b) );
		
		return 0;
	}
