#include<stdio.h>
#include<stdlib.h>

int main()
{
	int X, i;
	
	printf("donner moi un nomber : \n");
	 scanf("%d", &X);
	 
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d \n" ,X,i, X*i);
	}
	return 0;
}
