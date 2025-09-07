#include <stdio.h>

int main() {
    int age, annees;
    float montant, bonus = 0;

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez le nombre d'annees de cotisation : ");
    scanf("%d", &annees);

    printf("Entrez le montant total epargne (en euros) : ");
    scanf("%f", &montant);

    if (montant > 50000) {
        bonus = ((montant - 50000) / 10000) * 0.05 * montant;
    }

    if (age >= 65 && annees >= 30 && montant >= 100000) {
        printf("Plan : Complet avec pension elevee\n");
    } else if (age >= 65 && annees >= 20 && montant >= 50000) {
        printf("Plan : Partiel avec pension moyenne\n");
    } else if (age < 65) {
        printf("Plan : Epargne non encore disponible\n");
    } else {
        printf("Plan : Conditions non remplies pour une pension\n");
    }

    printf("Montant avec bonus : %.2f euros\n", montant + bonus);

    return 0;
}
