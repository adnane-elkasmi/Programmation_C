/*! Commentaire de fichier (doxygen)
\file Algorithme6.1.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Prédiction 1: Prédire l’heure
*/

/*! \page exemple_desc.c
 *  \section un Introduction
 *  Ce programme est la pour faire une demonstration sur l'utilisation
 *  des differents concepts vus en cours. En plus de cela, il y a
 *  aussi des exemples d'utilisation de doxygen...
 *
 *  \section oups Objectif du programme
 *  Le programme predit la minute qui suit. C'est un programme tres simple.
 */


/*! 
\fn int main (int argc, char** argv)
\author Adnane EL KASMI
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Prédiction 1: Prédire l’heure 
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>

/* Exercice 6: Prédiction 1: Prédire l’heure */

int main(int argc, char *argv[]) // Algorithme 6 Prédiction 1: Prédire l’heure
{
 /* Déclarations */	
int heure;    /* Variable d'heure */
int minute;   /* Variable de minute */
int v_retour; /* Variale de retour */
	
 /* Demande des heures et des minutes */
printf("Entrez les heures (de 0 a 23), puis les minutes (de 0 a 59) : \n");
v_retour = scanf("%d %d",&heure,&minute);

 /* Test des entrees */
if ( v_retour == 2 && heure >= 0 && heure <= 23 && minute >= 0 && minute <= 59 ) {
	
    /* Application de la prediction */
	if (minute == 59) {
	    minute = 0;
	    if (heure == 23) {
		heure = 0;
	    } else {
			    heure++;
			    }
	} else {
		    minute++;
		   }
	    	
	/* Affichage de l'heure */
	printf("Dans une minute, il sera %d heure(s) %d minute(s) \n" , heure , minute);
	return 0;
} else {
		printf("l'heure saisie est incorrect.");
	return 0;
        }
}
