#include <stdio.h>

int main() {
    int n, somme = 0;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        somme = somme + i; 
    }

    printf("La somme des %d premiers entiers est : %d\n", n, somme);

    return 0;
}
