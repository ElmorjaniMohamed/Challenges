#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float N1, N2;
    char operateur;
    printf("Donner 1er nombre:");
    scanf("%f",&N1);

    printf("Donner 2eme nombre:");
    scanf("%f",&N2);

     printf("Entrer un operateur: ");
    scanf("%s",&operateur);

    if (operateur=='+'){
        printf("N1 + N2 = %.2f",N1+N2);
    }
    else if (operateur=='-'){
        printf("N1 - N2 = %.2f",N1-N2);
    }
    else if (operateur=='*'){
        printf("N1 * N2 = %.2f",N1*N2);
    }
    else if (operateur=='/'){

          if (N2 != 0)
            printf("N1 / N2 = %.2f",N1/N2);
          else
              printf("La division est impossible");

    }

    return 0;
}
