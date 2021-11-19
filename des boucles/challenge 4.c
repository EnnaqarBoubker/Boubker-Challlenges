#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N ,i, A = 0;
    
    
    printf("Donner moi un nombre : ");
    scanf("%d",&N);
   
   
   
    while(N > 0)
    {
        i = N % 10;
        //A = (10 * A)+ i;
        N = N / 10;
    }
    
    printf("l inverse est %d\n",i);
    
    
    return 0;
}


