#include <stdio.h>
#include <math.h>
int main (){

    float a , b ,c ,x1,x2,delta,x;
    printf("ecrire la nomber a :");
    scanf("%f",&a);
    printf("ecrire la nomber b :");
    scanf("%f",&b);
    printf("ecrire la nomber c :");
    scanf("%f",&c);
    delta = b*b - 4*a*c;
    if (delta > 0){
        x1 = -b + sqrt(delta) / 2 * a;
        x2 = -b - sqrt(delta) / 2 * a;
        printf("deux solution :%f %f ",x1,x2);
    }else if (delta = 0)
    {
        x= -b / 2 * a ;
        printf("one solustion %f ",x);
    }else{
        printf("n'est pas solution ");
    }
    




}