#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10]={1,2,3,4,5,6,7,8,9,10};
    int i;

    for(i=0;i<10;i++)
        printf("T[%d]= %d,",i+1,T[i]);
    return 0;
}
