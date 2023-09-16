#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Veuiller entrer la valeur de a:");
    scanf("%d",&a);
    printf("Veuiller entrer la valeur de b:");
    scanf("%d",&b);
    printf("la somme de a + b = %.1d \n",a+b);
    printf("la soustraction de a - b = %.1d \n",a-b);
    printf("la multiplucation de a * b = %.1d \n",a*b);
    printf("le quontient de a / b = %.1f \n",(float)a/b);
    printf("le reste de a % b = %.1d",a%b);
    return 0;
}
