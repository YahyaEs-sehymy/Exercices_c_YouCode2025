	#include <stdio.h>
    #include <math.h>
	int main (){
	   float a,b,c,m,d;
       
	printf("ecrire la a :");
	scanf("%f",&a);

	printf("ecrire la b :");
	scanf("%f",&b);


	printf("ecrire la c :");
	scanf("%f",&c);

    m = pow(a * b * c, 1.0/3.0);


	printf("la moyen %.2f \n",m);
return 0;
}