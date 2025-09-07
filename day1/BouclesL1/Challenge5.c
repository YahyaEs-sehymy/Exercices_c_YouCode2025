#include <stdio.h>


int main() {
    int base,exposant,resulta=1;
    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    for (int i = 1; i <= exposant; i++) {
    resulta = resulta * base;
    }

    printf("%d^%d = %d\n", base, exposant, resulta);
    return 0;
}
