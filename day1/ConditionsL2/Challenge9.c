#include <stdio.h>

int main() {
    float s, f, h_sup, p, taux;
    int t;

    printf("Salaire de base : ");
    scanf("%f", &s);

    printf("Heures supplementaires : ");
    scanf("%f", &h_sup);

    printf("Type de poste (1=Junior, 2=Senior) : ");
    scanf("%d", &t);

    if (t == 1) p = s * 0.10;
    else if (t == 2) p = s * 0.20;
    else {
        printf("Type de poste invalide !\n");
        return 1;
    }

    taux = s / 160;
    f = s + p + (h_sup * 1.5 * taux);

    printf("Salaire final : %.2f euros\n", f);
    return 0;
}
