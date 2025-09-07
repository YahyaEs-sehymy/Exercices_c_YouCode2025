#include <stdio.h>
int main (){
    char lettre;
    printf("ecrire la lettre :");
    scanf("%c",&lettre);
    if (lettre >= 'A' && lettre <= 'Z')
    {
        printf("C'est une majuscule");
    }
    else{
        printf("Ce n'est pas une majuscule");
    }
    
}