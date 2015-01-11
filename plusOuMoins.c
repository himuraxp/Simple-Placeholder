#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv)
{
	int nombreMystere = 0, nombreChoix = 0;
	const int MAX = 100, MIN = 1;
	
	srand(time(NULL));
	nombreMystere = (rand() % (MAX -MIN + 1)) + MIN;
		 
	printf("Bienvenue sur Plus ou Moins !\nLe but de ce jeu est de deviner le Nombre Mystere.\nLe Nombre Mystere est compris entre 1 et 100 !\n");
		
	do
	{
		printf("Quel est le nombre ? ");
		scanf("%d", &nombreChoix);

		if (nombreMystere > nombreChoix)
			{printf("C'est plus !\n");}

		else if (nombreMystere < nombreChoix) 
			{printf("C'est moins !\n");}
		
		else
			{printf("Bravo, vous avez trouve le nombre mystere !!!\n");}
	
	} while(nombreChoix != nombreMystere);


	return 0;
}
