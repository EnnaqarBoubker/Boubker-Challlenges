#include <stdio.h>


int main () {
	
    char N[10], P[10], S[10], T[10];
    int A;
	
	
    printf("donner moi votre Nom :");
     scanf("%s", &N);
    printf("donner moi votre Prenom :");
     scanf("%s", &P);
    printf("donner moi votre age :");
     scanf("%d", &A);
    printf("donner moi votre Sexe :");
     scanf("%s", &S);
    printf("donner moi votre Telephone :");
     scanf("%s", &T);
    printf("Mon Nom est: %s; mon Prenom est : %s; mon age est :%d; mon sexe :%s; mon telephone est :%s" ,N,P,A,S,T);

    
    
   return 0;
}


