#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("Veuiller entrer un nombre:");
    scanf("%d",&N);
    while(N<=0 && N>=10)
    {
       printf("Veuiller entrer un nombre:");
       scanf("%d",&N);
    }
    for(i=0;i<=10;i++)
        printf("%d * %d = %d\n",N,i,i*N);
    return 0;
}
