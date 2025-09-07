#include <stdio.h>
int main (){
    char v;
    printf("ecrire la letter :");
    scanf("%c",&v);
    switch (v)
    {
    case 'a':case 'A':
    case 'e':case 'E':
    case 'i':case 'I':
    case 'o':case 'O':
    case 'u':case 'U':
        printf("c'est une voyelle");
        break;
    
    default:
            printf("%c n'est pas une voyelle.\n", v);
        break;
    }

    
    return 0;
}