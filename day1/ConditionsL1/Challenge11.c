#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char jours[7][10] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    srand(time(NULL));
    
    int index = rand() % 7;
    
    printf("Jour aleatoire: %s\n", jours[index]);
    
    return 0;
}
