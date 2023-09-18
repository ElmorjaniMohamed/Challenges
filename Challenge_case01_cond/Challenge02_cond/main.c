#include <stdio.h>
#include <stdlib.h>

int main()
{
	char voyelle;
	printf("Veuiller entrer un caractere:");
	scanf("%s",&voyelle);

	switch(voyelle){
		 case 'a' : printf("le caractere est un voyelle");
		            break;
	     case 'A' : printf("le caractere est un voyelle");
		            break;
	     case 'i' : printf("le caractere est un voyelle");
	                break;
	     case 'I' : printf("le caractere est un voyelle");
	                break;
	     case 'u' : printf("le caractere est un voyelle");
	                break;
	     case 'U' : printf("le caractere est un voyelle");
	                break;
	     case 'o' : printf("le caractere est un voyelle");
	                break;
	     case 'O' : printf("le caractere est un voyelle");
	                break;
	     case 'e' : printf("le caractere est un voyelle");
	                break;
	     case 'E' : printf("le caractere est un voyelle");
	                break;
	     case 'y' : printf("le caractere est un voyelle");
	                break;
	     case 'Y' : printf("le caractere est un voyelle");
	                break;
	     default : printf("le caractere n'est pas une voyelle");
		 break;
	}


	return 0;
}
