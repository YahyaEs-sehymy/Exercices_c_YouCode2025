#include <stdio.h>

int main() {
    float budget;
    int destination, personnes;

    printf("Entrez le budget (en euros) : ");
    scanf("%f", &budget);

    printf("Entrez la destination (1=Plage, 2=Montagne, 3=Ville) : ");
    scanf("%d", &destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &personnes);

    if (budget >= 1000) {
        printf("Type de voyage : Haut de gamme\n");
    } else if (budget >= 500) {
        printf("Type de voyage : Moyen\n");
    } else {
        printf("Type de voyage : Economique\n");
    }

    if (budget >= 1000 && personnes > 2) {
        printf("Destination recommandee : Plage\n");
    } else if (budget >= 500 && personnes <= 2) {
        printf("Destination recommandee : Montagne\n");
    } else {
        printf("Destination recommandee : Ville\n");
    }

    return 0;
}
