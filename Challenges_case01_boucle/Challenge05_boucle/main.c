#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Inverse, N;
    printf("Veuiller entrer le nombre a inverse:");
    scanf("%d",&N);
    Inverse = 0;
    do {

        Inverse = (Inverse * 10) + (N % 10);
        N = N / 10;

    }
    while(N!=0);
    printf("l'inverce de cette nombre est: %d",Inverse);


    return 0;
}
