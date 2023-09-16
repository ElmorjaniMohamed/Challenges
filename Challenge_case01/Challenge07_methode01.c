#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inverse, N;
    printf("Veuiller entrer le nombre a inverse infferieur a 1000:");
    scanf("%d",&N);
    if(N<1000){
        inverse = (N % 10)*100 + ((N / 10)%10)*10+(N / 100);
        printf("l'inverce de cette nombre est: %d",inverse);
    }
    else
        printf("le nombre est superieur a 1000");


    return 0;
}
