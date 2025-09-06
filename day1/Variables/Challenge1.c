
#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[100];

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (H/F) : ");
    scanf("%s", sexe);

    printf("Entrez votre email : ");
    scanf("%s", email);

    printf("\n Informations Personnelles\n");
    printf("Nom       : %s\n", nom);
    printf("Prenom    : %s\n", prenom);
    printf("Age       : %d\n", age);
    printf("Sexe      : %s\n", sexe);
    printf("Email     : %s\n", email);

    return 0;
}



