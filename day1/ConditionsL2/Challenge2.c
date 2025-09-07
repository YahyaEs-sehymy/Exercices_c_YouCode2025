#include <stdio.h>

int main() {
    float prime_base, prime_finale;
    int age, type_voiture, accidents;

    printf("Entrez la prime de base (dh) : ");
    scanf("%f", &prime_base);

    printf("Entrez l'age du conducteur : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1=Sportive, 2=Utilitaire, 3=Familiale) : ");
    scanf("%d", &type_voiture);

    printf("Entrez le nombre d'accidents (5 dernieres annees) : ");
    scanf("%d", &accidents);

    prime_finale = prime_base;

    if (age < 25) {
        prime_finale *= 1.5;
    } else if (age <= 65) {
        prime_finale *= 1.0;  
    } else {
        prime_finale *= 1.2;
    }

    if (type_voiture == 1) { // Sportive
        prime_finale *= 2.0;
    } else if (type_voiture == 2) { // Utilitaire
        prime_finale *= 1.2;
    } else if (type_voiture == 3) { // Familiale
        prime_finale *= 1.1;
    } else {
        printf("Type de voiture invalide!\n");
        return 1; 
    }

    if (accidents > 1) {
        prime_finale *= 1.3; // +30%
    }

    printf("La prime d'assurance finale est : %.2f €\n", prime_finale);

    return 0;
}
