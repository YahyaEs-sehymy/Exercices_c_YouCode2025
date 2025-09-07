#include <stdio.h>
int main (){
    int n ,m;
    printf("ecrire le nomber n :");
    scanf("%i",&n);
    for (int i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("%i * %i = %i\n",n,i,m);
    }
    
}