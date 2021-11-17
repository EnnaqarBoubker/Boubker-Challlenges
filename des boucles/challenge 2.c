#include<stdio.h>
#include<stdlib.h>

int main()
{
	int L /*nomber de ligne*/, i /*position*/ , j /*etoile*/, x /*espace*/;
	
	printf("donner moi le nomber de ligne : \n");
	 scanf("%d",&L);
	 
	for(i = 1; i <= L; i++)
	{
		for(x = 1; x <= L - i; x++)
		{
			printf(" ");
		}
		for (j = 1; j <= (i * 2)-1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	

	  return 0;
}
