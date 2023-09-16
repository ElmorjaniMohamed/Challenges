#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, S, M;
    printf("Veuiller entrer les valeurs de a,b et c:");
    scanf("%f%f%f",&a,&b,&c);
    S = a + b + c;
    printf("la somme est: %.2f \n",S);
    M = S/3;
    printf("le moyenne est: %.2f",M);
    return 0;
}
