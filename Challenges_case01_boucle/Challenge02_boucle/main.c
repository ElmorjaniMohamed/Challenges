#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L, C, i, j;
    printf("Veuiller entrer nombre des lignes:");
    scanf("%d",&L);
    for(i=1;i<=L;i++)
    {
        for(j=1;j<=L-i;j++)
        {
           printf("  ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
           printf("* ");
        }
        printf("\n");
    }

    return 0;
}
