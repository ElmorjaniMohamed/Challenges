#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N[20], S = 0, M, Min, Max;
    int i, taille, MS=0, MI=0, ME=0,posMin=0, posMax=0;
    printf("Veuiller saisir la taille du tableau: ");
    scanf("%d",&taille);

    printf("Veuiller Entrer les notes:\n");

    for(i=0; i<taille; i++)
    {

        do
        {
            printf("Note %d: ", i+1);
            scanf("%f", &N[i]);

            if(N[i]==0)
                break;

            else if(N[i]<=0 || N[i]>=20)
            {
                printf("la note n'est pas entre 0 et 20 \n");
            }
            S = S + N[i];

        }
        while(N[i]<0 || N[i]>20);


    }

    printf("\n\n");

    M = S / taille;
    printf("la somme des notes est: %.2f\n",S);
    printf("le moyenne des notes est: %.2f\n\n",M);

    for (int i = 0; i < taille; i++)
    {
        printf("Note %d : %.2f", i + 1, N[i]);
        if (N[i] == M)
        {
            printf("(egal a la moyenne)\n");
            ME++;
        }
        else if (N[i] < M)
        {
            printf("(inferieur a la moyenne)\n");
            MI++;
        }
        else
        {
            printf(" (superieur a la moyenne)\n");
            MS++;
        }
    }
    printf("\n\n");
    printf("les notes superieur a la moyenne est: %d\n\n",MS);

    Max = Min = N[0];
    for(i=0; i<taille; i++)
    {
        if( Max < N[i])
        {
            Max = N[i];
            posMax++;

        }

        else if(Min > N[i])
        {
            Min = N[i];
            posMin++;

        }

    }
    printf("la note la plus petite est: %.2f\n",Min);
    printf("la note la plus grande est: %.2f",Max);






    return 0;
}
