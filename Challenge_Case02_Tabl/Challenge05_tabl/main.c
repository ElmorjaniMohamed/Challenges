#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Nom[100];
    int nbrdecaractere;

    printf("Veuiller entrer votre nom:");
    scanf("%s",Nom);

    /*while(Nom[nbrdecaractere]=!'\0')
    {
        nbrdecaractere++;
    }*/
    nbrdecaractere = strlen(Nom);
    printf("Le nombre de caracteres dans le nom est : %d",nbrdecaractere);




return 0;
}
