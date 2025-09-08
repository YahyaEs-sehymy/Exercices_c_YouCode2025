#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[50];

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0';  

    printf("Enter the substring: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0';   

    if (strstr(mainStr, subStr) != NULL) {
        printf("Substring found!\n");
    } else {
        printf("Substring not found!\n");
    }

    return 0;
}
