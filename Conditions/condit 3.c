#include<stdio.h>
#include<stdlib.h>
//#include<ctype.h>

int main()
{
	char L /*Lettre*/;
	
	printf("donner une Lettre  : ");
	 scanf("%c", &L);
	 
    //L = tolower(L);
	switch (L)
	{
		case'a':case'A':
	    	printf("la lettre %c est voyelle", L);
			     break;
	    case'e':case'E':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'i':case 'I':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'o' :case 'O':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'u' :case 'U':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    case'y' :case 'Y':
	    	printf("la lettre %c est voyelle", L);
	    	     break;
	    
	    default :
	    	printf("La lettre ne pas voyelle");
	    	
	}
	
	return 0;
}
