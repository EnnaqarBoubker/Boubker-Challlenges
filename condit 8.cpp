#include<stdio.h>
#include<stdlib.h>


int main()
{
	char C  /*caract�re*/;
	int ASCII;
	
	printf("Donner moi un caractere : ");
	 scanf("%c", &C);
	 
	ASCII = (int) C;
	
	if(ASCII >= 65 && ASCII <= 90){
		printf("le caract�re est Majuscule");
	}
	
	else if(ASCII >= 97 && ASCII <= 122){
		printf("le caract�re est Minuscule");
	}
	
	else{
		printf("le caract�re est Symbole");
	}
	    
	    
	    
	return 0;
}
