#include <stdio.h>
#include <stdlib.h>
int somme(int a, int b)
{
    return a+b;
}


int main()
{
    int a, b, S;
    printf("Veuiller entrer la valeur de a est:");
    scanf("%d",&a);
    printf("Veuiller entrer la valeur de b est:");
    scanf("%d",&b);

    S=somme(a,b);

    printf("la somme de %.2d et %.2d est: %.2d",a,b,S);

    return 0;
}
