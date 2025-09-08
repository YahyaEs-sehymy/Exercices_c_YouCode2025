#include <stdio.h>

typedef struct {
    char nom[50];
    char prenom[50];
    int age;
} Personne;

int main() {
    Personne p ,p1;

    printf("Entrez le nom : ");
    scanf(" %[^\n]", p.nom);  

    printf("Entrez le prenom : ");
    scanf(" %[^\n]", p.prenom);

    printf("Entrez l'age : ");
    scanf("%d", &p.age);
    printf("Entrez le nom : ");
    scanf(" %[^\n]", p1.nom);  

    printf("Entrez le prenom : ");
    scanf(" %[^\n]", p1.prenom);

    printf("Entrez l'age : ");
    scanf("%d", &p1.age);

    printf("\n--- Informations de la personne ---\n");
    printf("Nom : %s\n", p.nom);
    printf("Prenom : %s\n", p.prenom);
    printf("Age : %d\n", p.age);
    printf("\n--- Informations de la personne ---\n");
    printf("Nom : %s\n", p1.nom);
    printf("Prenom : %s\n", p1.prenom);
    printf("Age : %d\n", p1.age);

    return 0;
}
