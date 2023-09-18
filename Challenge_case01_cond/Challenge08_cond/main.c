#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1, N2, N3, N4, M;
    N1:
    printf("Veuiller entrer la note N1 entre 0 et 20 :");
    scanf("%f",&N1);
    if(N1<=20 && N1>=0){
    printf("la note N1 est: %.2f\n\n",N1);
    }
    else
        goto N1;


    N2:
    printf("Veuiller entrer la note N2 entre 0 et 20 :");
    scanf("%f",&N2);
    if(N2<=20 && N2>=0){
    printf("la note N2 est: %.2f\n\n",N2);
    }
    else
        goto N2;



    N3:
    printf("Veuiller entrer la note N3 entre 0 et 20 :");
    scanf("%f",&N3);
    if(N3<=20 && N3>=0){
    printf("la note N3 est: %.2f\n\n",N3);
    }
    else
        goto N3;


    M = (N1+N2+N3)/3;
    printf("la moyenne des notes est: %.2f \n",M);

    if(M<10)
        printf("recale");
    else if(M>=10 && M<12)
        printf("la mention passable");
    else if(M>=12 && M<14)
        printf("la mention assez bien");
    else if(M>=14 && M<16)
        printf("la mention bien");
    else if(M<=20 && M>=16 )
        printf("la mention tres bien");
    else
        printf("ERROR");
    return 0;
}
