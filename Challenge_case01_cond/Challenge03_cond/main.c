#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* le programme calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, il renvoie le triple de leur somme */
    int a, b, S;
    printf("Veuiller entrer les valeurs de a et b:");
    scanf("%d%d",&a,&b);
    S = a + b;

    if(a==b){
        S= S*3;
        printf(" Les deux valeurs sont identiques. Le triple de leur somme est : %d",S);
    }

    else{

        printf("la somme de a et b est: %d",S);
    }

    return 0;
}
