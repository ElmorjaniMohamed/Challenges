#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee, moins, jours, heures, munites, secondes;
    printf("Veuiller entrer le nombre annee choisi:");
    scanf("%d",&annee);
    moins = annee * 12;
    jours = moins * 365;
    heures = jours * 24;
    munites = heures * 60;
    secondes = munites * 60;
    printf("%d Moins %d Jours %d Heures %d Munites %d secondes",moins,jours,heures,munites,secondes);

    return 0;
}
