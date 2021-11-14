
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A, B, C;
	
	printf("donner moi un nomber Entire : \n");
	 scanf("%d", &A);
	 
	
	B = (A % 10) * 100;
	A= A / 10;
	B = B + (A % 10) * 10;
	A = A / 10;
	B = B + A;
	C = A;
	printf(" L'inverce %d  est le nomber %d", C,B );
	
	
	return 0;
	
}
