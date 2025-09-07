#include <stdio.h>

int main() {
    int joursAccordes, joursUtilises, statut;
    int joursRestants;

    printf("Entrez le nombre total de jours de conges accordes : ");
    scanf("%d", &joursAccordes);

    printf("Entrez le nombre de jours de conges utilises : ");
    scanf("%d", &joursUtilises);

    printf("Entrez le statut de l'employe (1=Temps plein, 0=Temps partiel) : ");
    scanf("%d", &statut);

    if (statut == 1) { 
        joursRestants = joursAccordes - joursUtilises;
    } else if (statut == 0) { 
        joursRestants = (joursAccordes / 2) - joursUtilises;
    } else {
        printf("Statut invalide !\n");
        return 1;
    }

    if (joursRestants < 0) {
        printf("Attention ! Vous avez depasse vos jours de conge.\n");
    } else {
        printf("Jours de conge restants : %d\n", joursRestants);
    }

    return 0;
}
