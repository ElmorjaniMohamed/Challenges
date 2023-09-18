#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, S, i;
    int Max, Min;
    S = 0;
    system("color 0A");
    printf("Entrer un nombre:");
    scanf("%d",&N);
    Max = Min = N;

    while(N<100)
    {
        if (Max < N)
            Max = N;// 7

        else if(Min > N)
            Min = N;// -1

        printf("Entrer un nombre:");
        scanf("%d",&N);
        S=S+N;


    }
     printf("la somme est: %d \n",S);
     printf("Max = %d || Min = %d",Max,Min);

    return 0;
}
