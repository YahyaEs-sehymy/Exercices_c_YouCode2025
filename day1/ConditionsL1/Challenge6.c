#include <stdio.h>
int main (){
    int nomber ;
    
    printf("ecrire la nomber :");
    scanf("%i",&nomber);
    if (nomber > 0)
    {
        printf("Le nombre est positif");
    }else if (nomber < 0)
    {
         printf("Le nombre est negatif");
    }else{
        printf("Le nombre est nul");
    }
    
    
}