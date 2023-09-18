#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 4");
    srand(time(NULL));
    int Jour_aleatoire = rand()%7;
    switch(Jour_aleatoire){
          case 1 : printf("Lundi\n");
                   break;
          case 2 : printf("Mardi\n");
                   break;
          case 3 : printf("Mercredi\n");
                   break;
          case 4 : printf("Jeudi\n");
                   break;
          case 5 : printf("Vendredi\n");
                   break;
          case 6 : printf("Samedi\n");
                   break;
          case 7 : printf("Dimanche\n");
                   break;
          default : printf("Jour inconnu");
    }


    return 0;
}
