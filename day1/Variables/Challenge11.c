	#include <stdio.h>
int main (){
	float longueur ,largeur,Surface;   
    printf("ecrire la longueur :");
	scanf("%f",&longueur);

	printf("ecrire la largeur :");
	scanf("%f",&largeur);
	
    Surface = longueur * largeur;
    printf("la Surface est :%.2f",Surface);
return 0;
}