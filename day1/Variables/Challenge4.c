#include <stdio.h>

int main() {
    float kmh, ms;

    // entrire km
    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);

    // Convertir de km/h en m/s
    ms = kmh * 0.27778;

    // Show result
    printf("%.2f km/h = %.2f m/s\n", kmh, ms);

    return 0;
}
