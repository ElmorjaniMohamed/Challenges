#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X1, X2, Y1, Y2, MN ;
    printf("donner de la coordonnee X de 1:");
     scanf("%d",&X1);
    printf("donner de la coordonnee Y de 1:");
     scanf("%d",&Y1);
    printf("donner de la coordonnee X de 2:");
     scanf("%d",&X2);
    printf("donner de la coordonnee Y de 2:");
     scanf("%d",&Y2);
    MN = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
    printf("La distance entre M et N est: %d",MN);
    return 0;
}
