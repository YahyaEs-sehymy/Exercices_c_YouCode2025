#include <stdio.h>
int main (){
    int a,j,m;
    printf("ecrire anne :");
    scanf("%i",&a);
    printf("ecrire joure :");
    scanf("%i",&j);
    printf("ecrire mois :");
    scanf("%i",&m);

    printf(" %02i-",j);
    
    switch (m)
    {
    case 1:
        printf("Janvier");
        break;
    case 2:
        printf("Fevrier");
        break;
    case 3:
        printf("Mars");
        break;
    case 4:
        printf("Avril");
        break;
    case 5:
        printf("Mai");
        break;
    case 6:
        printf("Juin");
        break;
    case 7:
        printf("Juillet");
        break;
    case 8:
        printf("Aout");
        break;
    case 9:
        printf("Septembre");
        break;
    case 10:
        printf("Octobre");
        break;
    case 11:
        printf("Novembre");
        break;
    case 12:
        printf("Decembre");
        break;
    
    default:
        printf("mois incorrect");
        break;
    }
printf("-%i",a);
    return 0;
    

}