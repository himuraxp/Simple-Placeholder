/*Jeu en mode console PLUS OU MOINS. 
 * Le but de ce jeu est de trouver le NOMBRE MYSTERE. 
 * Il sera automatiquement généré en SOLO ou demandé par un joueur supplementaire en VERSUS. 
 * La console indiquera plus ou moins pour aider le joueur à retrouver le NOMBRE MYSTERE. 
 * Plusieurs modes de difficultés sont disponibles.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{	
	//Initialisation des variables pour les modes et niveaux
	int mode = 0, lvl = 0;

	//On demande le mode de jeu
	printf("Benvenue sur Plus ou Moins\nLe but de ce jeu est de deviner le Nombre Mystere.\n\n");
	printf("Choix du Mode\n 1. Solo\n 2. Versus\n");
        scanf("%d", &mode);

	//Initialisation des variables 
  	int nombreMystere = 0, nombreEntrer = 0;
  	int recommencer;

	//Boucle pour recommencer la partie
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

	//Choix du mode
	switch (mode)
     	{

		//Mode Solo
        	case 1:
			//Création d'un nombre aléatoire compris entre 1 et 100
              		srand(time(NULL));
		        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

			//On demande le mode de difficulté
              		printf("Niveau de difficulte\n 1. Easy (1 - 100)\n 2. Normal (1 - 1 000)\n 3. Hard (1 - 10 000)\n");
              		scanf("%d", &lvl);
              		printf("Debut de la partie en Solo !\n============================\n");
	      		
			//Tant que le nombre entré est different du nombre aléatoire on recommence
              		do
              		{	
			        //On demande le nombre	
         	  		printf("Quel est le nombre ? ");
                  		scanf("%d", &nombreEntrer); 
		  		//On ajoute une tentative pour calculer le nombre le coups
		  		nombreCoup++;
		  		//On compare le nombre entré avec le nombre aléatoire
		  		if (nombreEntrer > nombreMystere)
                    			printf("C'est Moins!\n");
                  		else if (nombreEntrer < nombreMystere)
                    			printf("C'est Plus!\n");
                  		else
                    			printf("Felicitation vous avez trouvez la solution en %d coups!\n", nombreCoup);

              		} while (nombreMystere != nombreEntrer);
         	break;
		
		//Mode Versus
         	case 2:
              		printf("Debut de la partie en Versus !\n=============================\n");
              		printf("Joueur 1: Entrer le nombre Mystere\n");
              
			//On entre le nombre mystere
	      		scanf("%d", &nombreMystere);
              		printf("Joueur 2: Trouver le nombre Mystere\n");
	    		
			//On compare le nombre entré avec le nombre aléatoire
	      		do
              		{
				//On demande le nombre
                  		scanf("%d", &nombreEntrer);
	       	  		nombreCoup++;
 				//On compare le nombre entré avec le nombre mystere
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
	   
		//On recommence la boucle complete  
         	printf("Recommencer ? 1.Oui / 2.Non\n");
         	scanf("%d", &recommencer);
         }

  	printf("A bientot\n");

  	return 0;
}


