	#include <stdio.h>
#include <math.h>
	int main (){
	    double x1,y1,z1;
        double x2,y2,z2,distance;

	printf("ecrire la x1  :");
	scanf("%lf",&x1);
    printf("ecrire la y1  :");
	scanf("%lf",&y1);
    printf("ecrire la z1  :");
	scanf("%lf",&z1);

    printf("ecrire la x2  :");
	scanf("%lf",&x2);
    printf("ecrire la y2  :");
	scanf("%lf",&y2);
    printf("ecrire la z2  :");
	scanf("%lf",&z2);

distance = sqrt(
(x2 - x1 ) * (x2 - x1 ) +
(y2 - y1 ) * (y2 - y1 ) +
(z2 - z1 ) * (z2 - z1 ) 
);

printf("La distance entre les deux points est : %.2f\n", distance);

	
return 0;
}