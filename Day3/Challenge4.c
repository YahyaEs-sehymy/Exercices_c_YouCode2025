#include <stdio.h>
#include <string.h>

int main (){
    char ch1[50];
    char ch2[50];
    printf("Enter a string:");
    scanf(" %[^\n]",ch1);

    getchar();
    
    printf("Enter a string:");
    scanf(" %[^\n]",ch2);
    
    if (strcmp(ch1,ch2)==0)
    {
        printf("The strings are equal");
    }else
    {
        printf("The strings are not equal");
    }
    
}   