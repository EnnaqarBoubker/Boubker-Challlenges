#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N /*number*/, A;
	
	printf("donner moi une Nombre : ");
	 scanf("%d", &N);
	 
	 A = N % 2;
	 
	if(A == 0)
	   printf("le Nembre N est pair %d", A);
	   
	else
	   printf("le Nomber N est impair%d", A);
	   
	   
	   return 0;
}
