#include <stdio.h>

int main() {
    int nombre;
    int m, c, d, u;

    printf("Entrez un nombre entier a 4 chiffres : ");
    scanf("%d", &nombre);

    m = nombre / 1000;         
    c = (nombre / 100) % 10;  
    d = (nombre / 10) % 10;     
    u = nombre % 10;              

    printf("Nombre invers : %d%d%d%d\n", u, d, c, m);

    return 0;
}
