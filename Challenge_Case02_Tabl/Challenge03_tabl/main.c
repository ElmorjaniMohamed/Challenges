#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int N, i, j, C;
    printf("Veuiller entrer les elements des tableau:\n",i);

    for(i=0;i<10;i++)
    {
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
          if(T[i]>T[j])
          {
             C = T[i];
            T[i] = T[j];
            T[j] = C ;
          }

        }
    }

    printf("les elements de tableau du ordre croissant est: ");
    for(i=0;i<10;i++)
    {
         printf("%d",T[i]);
     if(i<9)
        printf(", ");
    }

    return 0;
}
