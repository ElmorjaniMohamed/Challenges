#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour, moin, annee;
    printf("Entrez une date au format jour/mois/année (par exemple, 11/09/2023) :");
    scanf("%d/%d/%d",&jour,&moin,&annee);
    printf("%d-", jour);
    switch(moin){
       case 1 : printf("Janvier");
                break;
       case 2 : printf("Fevrier");
                break;
       case 3 : printf("Mars");
                break;
       case 4 : printf("Avril");
                break;
       case 5 : printf("Mai");
                break;
       case 6 : printf("Juin");
                break;
       case 7 : printf("Juillet");
                break;
       case 8 : printf("Aout");
                break;
       case 9 : printf("septembre");
                break;
       case 10 : printf("octobre");
                break;
       case 11 : printf("novembre");
                break;
       case 12 : printf("decembre");
                break;
       default : printf("le moin n'est pas exacte");
       break;
    }
    printf("-%d",annee);

    return 0;
}
