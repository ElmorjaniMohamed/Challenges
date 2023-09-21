#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int N, i, Max, Min;
    printf("Veuiller entrer les elements des tableau:\n",i);

    for(i=0;i<10;i++)
    {
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    T[0]=Max=Min ;
    for(i=0;i<10;i++)
    {
       if(Max < T[i])
            Max = T[i];

         else if (Min > T[i])
            Min = T[i];

    }
    printf("Max = %d || Min = %d",Max,Min);
    return 0;
}
