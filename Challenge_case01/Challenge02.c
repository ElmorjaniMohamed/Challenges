#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;
    printf("Veuiller entrer la temperature en Fahrenheit:");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf("temperature en Celsius est: %f \n",C);
    if(C <0)
       printf("la temperature est tres froid");
    else if(C > 0 && C <= 20)
       printf(" la temperature est froid");
    else if(C > 20 && C < 37)
       printf("la temperature est chaud");
    else
       printf("la temperature est tres chaud");
    return 0;
}
