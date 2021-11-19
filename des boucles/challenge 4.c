#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N /* nomber de l'utilisateur*/ , A ;
    
    
    printf("Donner moi un nombre : ");
    scanf("%d",&N);
   
   
   
    while(N > 0)
    {
        
        A = (10 * A)+ (N % 10);
        N = N / 10;
    }
    
    printf("l inverse est %d\n",A);
    
    
    return 0;
}


