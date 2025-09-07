#include <stdio.h>

int main() {
    int anne, Mois, Jours, Heures, Minutes, Secondes;
    int choix;

    printf("Entrez le nombre d'annees : ");
    scanf("%d", &anne);

    Mois = anne * 12;
    Jours = 365 * anne;
    Heures = Jours * 24;
    Minutes = Heures * 60;
    Secondes = Minutes * 60;

    do {
        printf("\n== MENU ==\n");
        printf("1. Afficher en mois\n");
        printf("2. Afficher en jours\n");
        printf("3. Afficher en heures\n");
        printf("4. Afficher en minutes\n");
        printf("5. Afficher en secondes\n");
        printf("6. Afficher tout\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("%d annee(s) = %d mois\n", anne, Mois);
                break;
            case 2:
                printf("%d annee(s) = %d jours\n", anne, Jours);
                break;
            case 3:
                printf("%d annee(s) = %d heures\n", anne, Heures);
                break;
            case 4:
                printf("%d annee(s) = %d minutes\n", anne, Minutes);
                break;
            case 5:
                printf("%d annee(s) = %d secondes\n", anne, Secondes);
                break;
            case 6:
                printf("\n--- Resultats complets ---\n");
                printf("Mois : %d\n", Mois);
                printf("Jours : %d\n", Jours);
                printf("Heures : %d\n", Heures);
                printf("Minutes : %d\n", Minutes);
                printf("Secondes : %d\n", Secondes);
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide !\n");
        }
    } while (choix != 0);

    return 0;
}
