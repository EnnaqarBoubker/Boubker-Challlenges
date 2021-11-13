#include<stdio.h>
#include<stdlib.h>


int main()
{
	char C  /*caractère*/;
	int ASCII;
	
	printf("Donner moi un caractere : ");
	 scanf("%c", &C);
	 
	ASCII = (int) C;
	
	if(ASCII >= 65 && ASCII <= 90){
		printf("le caractére est Majuscule");
	}
	
	else if(ASCII >= 97 && ASCII <= 122){
		printf("le caractére est Minuscule");
	}
	
	else{
		printf("le caractére est Symbole");
	}
	    
	    
	    
	return 0;
}
