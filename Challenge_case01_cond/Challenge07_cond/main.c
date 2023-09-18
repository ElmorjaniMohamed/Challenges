#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("Veuiller entrer un caractere:");
    scanf(" %c",&caractere);
    if(caractere>=65 && caractere<=90){
        printf("le caractère donné est un alphabet majuscule");
    }
    else
        printf("le caractère donné est un alphabet non majuscule");
    return 0;
}
