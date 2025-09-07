#include <stdio.h>
int main (){
    float Revenu_annuel,Score_de_credit;
    int Duree_du_pret;
    printf("ecrire la Revenu_annuel ");
    scanf("%f",&Revenu_annuel);
    printf("ecrire la Score_de_credit ");
    scanf("%f",&Score_de_credit);
    printf("ecrire la Duree_du_pret ");
    scanf("%i",&Duree_du_pret);
    if(Revenu_annuel >= 30000 && Score_de_credit>= 700 && Duree_du_pret<=10){
        printf("Eligible");
    }else if (Revenu_annuel >= 30000 && Score_de_credit>= 650 && Duree_du_pret<=15)
    {
        printf("Eligible avec conditions");
    }else{
        printf("Non eligible");
    }
    

    return 0;
}