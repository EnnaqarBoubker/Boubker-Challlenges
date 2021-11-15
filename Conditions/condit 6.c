#include <stdio.h>
#include <stdlib.h>


int main() {
	int A /*anner*/, M /*mois*/, J /*jour*/, H /*hour*/, Mi /*minute*/, Se /*second*/, choix ;
	
	printf("choisissez le nombre des annees : ");
	scanf("%d", &A);
	
	printf("Entrer votre choix \n");
	printf("1. Mois \n");
	printf("2. Jours \n");
	printf("3. Heures \n");
	printf("4. Minutes \n");
	printf("5. Secondes \n");
	scanf("%d", &choix);
	
	switch (choix) {
		case 1 :
			M = A * 12;
			printf("%d Mois ", M);
			break;
			
		case 2 : 
			J = A * 365;
			printf("%d Jours ", J);
			break;
			
		case 3 : 
			H = A * 365 * 24;
			printf("%d Heures ", H);
			break;
			
		case 4 :
			Mi = A * 365 * 24 * 60;
			printf("%d Minutes ", Mi);
			break;
			
		case 5 :
			Se = A * 365 * 24 * 60 * 60;
			printf("%d Secondes ", Se);
	}
	
	
	return 0;
}
