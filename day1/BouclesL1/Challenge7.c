#include <stdio.h>

int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    printf("Nombre inverse : ");
    while (n != 0) {
        printf("%d", n % 10);  
        n = n /10;               
    }
    printf("\n");

    return 0;
}
