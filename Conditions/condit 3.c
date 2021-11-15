#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	char L /*Lettre*/;
	
	printf("donner une Lettre  : ");
	 scanf("%c", &L);
	 
	L = tolower(L);
	switch (L)
	{
		case'a':
			printf("la lettre %c est voyelle", L);
			     break;
	    case'e':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'i':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'o':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'u':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'y':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    
	    default :
	    	printf("La lettre ne pas voyelle");
	    	
	}
	
	return 0;
}
