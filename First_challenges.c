#include <stdio.h>


int main () {
	
    char Nom[10], Prenom[10], Sexe[10], Tele[10];
    int Age;
	
	
    printf("donner moi votre Nom :");
     scanf("%s", &Nom);
    printf("donner moi votre Prenom :");
     scanf("%s", &Prenom);
    printf("donner moi votre age :");
     scanf("%d", &Age);
    printf("donner moi votre Sexe :");
     scanf("%s", &Sexe);
    printf("donner moi votre Telephone :");
     scanf("%s", &Tele);
    printf("Mon Nom est: %s; mon Prenom est : %s; mon age est :%d; mon sexe :%s; mon telephone est :%s" ,Nom,Prenom,Age,Sexe,Tele);

    
    
   return 0;
}


