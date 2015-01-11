#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	int mode = 0, lvl = 0;

	printf("Benvenue sur Plus ou Moins\nLe but de ce jeu est de deviner le Nombre Mystere.\n\n");
	printf("Choix du Mode\n 1. Solo\n 2. Versus\n");
        scanf("%d", &mode);
     
  	int nombreMystere = 0, nombreEntrer = 0;
  	int recommencer;

	for (recommencer = 1; recommencer == 1;)
        { 
              int nombreCoup = 0;
              int MAX = 100, MIN = 1; 
              switch (lvl)
	      {
                      case 1:(MAX = 100);
                        break;
                      case 2:(MAX = 1000);
                        break;
                      case 3:(MAX = 10000); 
                        break;
                      default:(MAX = 100);
                        break;
	      }                        

	switch (mode)
     	{
        case 1:
              srand(time(NULL));
              nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

              printf("Niveau de difficulte\n 1. Easy (1 - 100)\n 2. Normal (1 - 1 000)\n 3. Hard (1 - 10 000)\n");
              scanf("%d", &lvl);
              printf("Debut de la partie en Solo !\n============================\n");
	      
              do
              {  
         	  printf("Quel est le nombre ? ");
                  scanf("%d", &nombreEntrer); 
		  
		  nombreCoup++;
		  
		  if (nombreEntrer > nombreMystere)
                    printf("C'est Moins!\n");
                  else if (nombreEntrer < nombreMystere)
                    printf("C'est Plus!\n");
                  else
                    printf("Felicitation vous avez trouvez la solution en %d coups!\n", nombreCoup);

              } while (nombreMystere != nombreEntrer);
         break;

         case 2:
              printf("Debut de la partie en Versus !\n=============================\n");
              printf("Joueur 1: Entrer le nombre Mystere\n");
              
	      scanf("%d", &nombreMystere);
              printf("Joueur 2: Trouver le nombre Mystere\n");
	    
	      do
              {
                  scanf("%d", &nombreEntrer);
	       	  nombreCoup++;
 
		  if (nombreEntrer > nombreMystere)
                    printf("C'est Moins!\n");
                  else if (nombreEntrer < nombreMystere)
                    printf("C'est Plus!\n");
                  else
                    printf("Felicitation vous avez trouvez la solution en %d coups!\n", nombreCoup);

	      } while (nombreMystere != nombreEntrer);
         break;

 	 default:
              printf("Le mode de jeu est inconnu!\n");
         break;}
	   
         printf("Recommencer ? 1.Oui / 2.Non\n");
         scanf("%d", &recommencer);
         }

  printf("A bientot\n");

  return 0;
}


