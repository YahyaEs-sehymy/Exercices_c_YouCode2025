#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre n : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont :\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", 2 * i - 1);
    }

    return 0;
}
