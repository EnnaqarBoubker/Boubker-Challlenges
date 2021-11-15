
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A, B, C , D;
	
	printf("donner moi un nomber Entire : \n");
	 scanf("%d", &D);
	 
	
	A= ( D % 100) %  10;
    B= (D % 100) /10;
	C= D/ 100;
	
	printf(" L'inverce de nomber entier est le  %d%d%d",A,B,C );
	
	
	return 0;
	
}
