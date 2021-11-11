#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float MN, Xm, Xn, Ym, Yn;
	
	printf("donner moi la V de Xm : ");
	 scanf("%f", &Xm);
	 
	printf("donner moi la V de Xn :");
	 scanf("%f", &Xn);
	 
	printf("donner moi la V de Ym :");
	 scanf("%f", &Ym);
	 
	printf("donner moi la V de Yn :");
	 scanf("%f", &Yn);
	 
	MN= sqrt((pow(Xn - Xm, 2)) + (pow(Yn - Ym, 2)));
	
	printf("la distance MN est: %.3f",MN);
	
	
	
	return 0;
	 
	 
}
