#include <stdio.h>

int main() {
    float celsius, kelvin;

    printf("Entre la température en Celsius : ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2f C = %.2f K\n", celsius, kelvin);

    return 0;
}
