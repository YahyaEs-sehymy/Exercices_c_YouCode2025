#include <stdio.h>
int main (){
    int h1,m1,s1,t1;
    int h2,m2,s2,t2;
    printf("h1:");
    scanf("%i",&h1);
    printf("m1:");
    scanf("%i",&m1);
    printf("s1:");
    scanf("%i",&s1);
    printf("h2:");
    scanf("%i",&h2);
    printf("m2:");
    scanf("%i",&m2);
    printf("s2:");
    scanf("%i",&s2);

    t1 = h1 * 60 * 60  +  m1 * 60 + s1;
    t2 = h2 * 60 * 60  +  m2 * 60 + s2;
    printf("t1:%i\n",t1);
    printf("t2:%i\n",t2);
    if (t1>t2)
    {
        printf("Le premier instant vient avant le deuxieme");
    }else if (t1<t2)
    {
        printf("Le deuxième instant vient avant le premier");
    }else{
        printf("Il s'agit du même instant");
    }
    
}