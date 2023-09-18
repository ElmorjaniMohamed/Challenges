#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main()
{     int n;
    scanf("%d",&n);
        for (int i=0;i<n;i++){
            for (int j=n ; j>-n+1;j--){
                if (i>abs(j))printf("*");
                else printf(" ");
            }
            printf("\n");
        }
}
