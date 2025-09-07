#include <stdio.h>

int main() {
    float revenu, revenu_net, impot;
    int statut;
    int deduction = 0;

    printf("Entrez le revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez le statut fiscal (1=Celibataire, 2=Marie, 3=Chef de famille) : ");
    scanf("%d", &statut);

    if(statut == 1) {
        deduction = 1000;
    } else if(statut == 2) {
        deduction = 2000;
    } else if(statut == 3) {
        deduction = 3000;
    } else {
        printf("Statut fiscal invalide !\n");
        return 1;
    }

    revenu_net = revenu - deduction;

    if(revenu_net <= 20000) {
        impot = revenu_net * 0.05; // 5%
    } else if(revenu_net <= 50000) {
        impot = revenu_net * 0.10; // 10%
    } else {
        impot = revenu_net * 0.20; // 20%
    }

    printf("Revenu net apres deduction : %.2f dh\n", revenu_net);
    printf("Impot a payer : %.2f dh\n", impot);

    return 0;
}
