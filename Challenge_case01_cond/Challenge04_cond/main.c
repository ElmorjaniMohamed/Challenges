#include <stdio.h>
#include <stdlib.h>

int main()
{
    // le programme qui permet de calculer les solutions possible d’une équation 2ème degré //
    int a, b, c, Delta;
    float S1, S2;
    printf("Veuiller entrer la valeur de a:");
    scanf("%d",&a);
    printf("Veuiller entrer la valeur de b:");
    scanf("%d",&b);
    printf("Veuiller entrer la valeur de c:");
    scanf("%d",&c);
    Delta = b*b - 4*a*c ;
    if(Delta>0){
       S1 = (-b - sqrt(Delta))/ 2*a ;
       S2 = (-b + sqrt(Delta))/ 2*a ;
       printf("L'equation admet deux solutions distinctes: S1= %.2f \n S2= %.2f :",S1,S2);

    }
    else if(Delta==0){
       S1 = (-b)/2*a ;
       printf("L'equation admet une seule solution: S1= %.2f: \n",S1);
    }
    else
        printf("L'équation n'a pas de solution reelle.");

    return 0;
}
