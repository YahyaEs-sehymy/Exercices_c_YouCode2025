#include <stdio.h>
int main (){
    int n ,m=1;
    printf("ecrire le nomber n :");
    scanf("%i",&n);
    for (int i = 1; i <= n; i++)
    {
        m = m * i; 
    }
    printf("factoriel de %i est : %i\n",n,m);

        return 0;

    
}
