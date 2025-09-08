#include <stdio.h>
int main (){
    char ch1[50];
    char ch2[50];
    printf("Enter a string:");
    scanf("%[^\n]s",ch1);

    getchar();
    
    printf("Enter a string:");
    scanf("%[^\n]s",ch2);
    printf("You entered: %s %s\n",ch1,ch2);
}