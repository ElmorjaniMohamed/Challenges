#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;
    printf("Veuiller entrer un caractere:");
    scanf("%c",&C);
    if((C>=65 && C<=90) || (C>=97 && C<=122)){

        printf("Voila! %c est une lettre de l'alphabet\n",C);

        if(C>=65 && C<=90)
            printf("%c est une lettre majuscule ",C);
        else if(C>=97 && C<=122)
            printf("%c est une lettre minuscule",C);

    }
    else
        printf(" %c n'est pas une lettre de l'alphabet",C);



    return 0;
}
