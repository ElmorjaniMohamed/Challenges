#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, C;
    const float Pi=3.14;
    printf("Veuiller entrer la rayon de cercle:");
    scanf("%f",&r);
    C = 2*Pi*r;
    printf("la circonference du cercle est: %.2f",C);
    return 0;
}
