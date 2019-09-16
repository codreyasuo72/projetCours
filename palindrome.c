#include "mylib.h"

void palindrome(char mot[]){
  int longueur,i;
  longueur=strlen(mot);
	i=0;
	while ((mot[i]==mot[longueur-i-1]) && (i<longueur/2))
		{
			i++;
		}
	if (i==longueur/2)
		printf("C'est un palindrome\n");
	else
		printf("Ce n'est pas un palindrome car %c est différent de %c \n", mot[i], mot[longueur-i-1]);
}
