#include <stdio.h>

int main() {
    int a, h, c; 

    printf("Age : ");
    scanf("%d", &a);

    printf("Historique medical (0=aucun, 1=mineur, 2=majeur) : ");
    scanf("%d", &h);

    printf("Type couverture (1=base, 2=etendue) : ");
    scanf("%d", &c);

    if (a < 30 || (a >= 30 && h == 0)) {
        printf("Plan : Base");
    } else {
        printf("Plan : Etendu");
    }

    if (h == 2) {
        printf(" + couverture supplementaire");
    }

    printf("\n");
    return 0;
}
