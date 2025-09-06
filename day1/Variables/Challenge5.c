#include <stdio.h>
int main (){
    float celsius ;

    printf("entrire le celsuis :");
    scanf("%f",&celsius);

    if (celsius < 0) {
        printf("L'eau est solide.\n");
    } 
    else if (celsius < 100) { 
        printf("L'eau est liquide.\n");
    } else {
        printf("L'eau est gazeuse.\n");
    }
}