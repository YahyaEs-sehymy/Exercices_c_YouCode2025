#include <stdio.h>

int main() {
    float s, final;
    int a, r;
    char *mention;

    printf("Entrez le score (0-100) : ");
    scanf("%f", &s);

    printf("Entrez l'anciennete (en annees) : ");
    scanf("%d", &a);

    printf("Entrez le nombre de recompenses (0, 1, 2 ou plus) : ");
    scanf("%d", &r);

    if (s >= 90 && a >= 5) {
        mention = "Excellente";
        final = s;
    } else if (s >= 75 && a >= 3) {
        mention = "Bonne";
        final = s;
    } else if (s >= 50 && a < 3) {
        mention = "Assez bien";
        final = s;
    } else {
        mention = "Insuffisante";
        final = s;
    }

    if (r == 1) {
        final *= 1.10; // +10%
    } else if (r >= 2) {
        final *= 1.20; // +20%
    }

    printf("\nMention : %s\n", mention);
    printf("Score final avec bonus : %.2f\n", final);

    return 0;
}
