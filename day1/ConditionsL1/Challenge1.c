#include <stdio.h>
int main (){
    int n1;
    printf("ecrire la nomber :");
    scanf("%i",&n1);

    if(n1 % 2 == 0){
        printf("pair");

    }else{
        printf("impair");
    }
    return 0;
}