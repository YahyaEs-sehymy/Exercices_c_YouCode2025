#include <stdio.h>

int main() {
    char str[100];    
    int i = 0;       
    int length = 0;   

    printf("Entrez une chaine : ");
        scanf("%[^\n]",str);

    while (str[i] != '\0') {   
        if (str[i] != '\n') { 
            length++;
        }
        i++;
    }

    printf("La longueur de la chaine est : %d\n", length);

    return 0;
}
