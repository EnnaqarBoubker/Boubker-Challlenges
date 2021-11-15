#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a /*nob1*/ , b/*nbr2*/;
	
	printf("donner moi le premier nomber 1 : ");
	 scanf("%d", &a);
	 
	printf("donner moi le deuxeme nomber 2 : ");
	 scanf("%d", &b);
	 
	if(a > b){
		printf("la resulta est : nomber 1 > nomber 2 : %d > %d ", a , b);
	}
	
	else if(a < b){
		printf("la resulta est : nomber 2 > nomber 1 : %d > %d", b , a);
	}
	
	else {
		printf("la resulta est : nomber 1 = nomber 2 : %d = %d ", a , b);
	}
	
	return 0;
}
