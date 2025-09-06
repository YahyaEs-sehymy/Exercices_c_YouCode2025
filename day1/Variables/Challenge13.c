#include <stdio.h>
int main() {
    int n;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    printf("\nDecimal     : %d\n", n);
    printf("Hexadecimal : %X\n", n);
    printf("Binaire     : ");
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    
    printf("%d",n);
    printf("\n");

    return 0;
}
