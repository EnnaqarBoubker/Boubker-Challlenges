// Circonférence d'un triangle

#include<stdio.h>
#include<stdlib.h>
int main () 
{
	int CT, L /*Longeur*/, l /*largeur*/;
	
	printf("Donner moi la valeur du Longeur :");
	 scanf("%d",&L);
	printf("Donner moi la valeur du Largeur :");
	 scanf("%d",&l);
	 
	   CT = 2 * (L + l);
	   
	printf("la Circonférence d'un triangle est :%d",CT);
	  
	
	return 0;
}
