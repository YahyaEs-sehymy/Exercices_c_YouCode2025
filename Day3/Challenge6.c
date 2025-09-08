#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);  

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {  
            count++;
        }
    }

    printf("The character '%c' appears %d times.\n", ch, count);

    return 0;
}
