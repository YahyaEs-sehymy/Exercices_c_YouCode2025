#include <stdio.h>

int main() {
    char str[100];    
    int i = 0;       
    int length = 0;   

    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin);   
    while (str[i] != '\0') {   
        if (str[i] != '\n') { 
            length++;
        }
        i++;
    }

    printf("La longueur de la chaine est : %d\n", length);

    return 0;
}
