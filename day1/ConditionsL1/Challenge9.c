#include <stdio.h>
int main() {
    char lettre;
    printf("Ecrire la lettre : ");
    scanf("%c", &lettre);

    if (lettre >= 'A' && lettre <= 'Z') {
        printf("C'est une majuscule\n");
    } else if (lettre >= 'a' && lettre <= 'z') {
        printf("C'est une minuscule\n");
    } else {
        printf("Ce n'est pas une lettre alphabétique\n");
    }

    return 0;
}
