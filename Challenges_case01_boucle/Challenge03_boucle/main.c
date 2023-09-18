#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, premier, i;
    printf("Veuiller entrer un nombre:");
    scanf("%d",&N);
    premier = 0;
    for(i=2;i<=N/2;i++)
    {
       if(N%i==0){
         premier = 0;
       break;
       }

    }
    if(premier==1)
        printf(" %d est un nombre premier",N);
    else
        printf(" %d est un nombre non premier",N);


    return 0;
}
