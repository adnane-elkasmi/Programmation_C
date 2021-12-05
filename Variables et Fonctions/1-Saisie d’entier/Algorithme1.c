/*! Commentaire de fichier (doxygen)
\file Algorithme1.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 3
\date 03 Novembre 2019
\brief ProgC TP3 : Saisie d’entier
*/

/*! \page exemple_desc.c
 *  \section une Introduction
 *  Ce programme est la pour faire une demonstration sur l'utilisation
 *  des differents concepts vus en cours. En plus de cela, il y a
 *  aussi des exemples d'utilisation de doxygen...
 *
 *  \section oups Objectif du programme
 *  Le programme demande le choix a l'utilisateur, et
 *  affiche le choix de celui-ci. C'est un programme tres simple.

 *  \section deux Algorithme
 *  Voici une facon de presenter un algorithme. L'algorithme ici
 *  presente est celui qui est traduit par la suite. 
 *
\verbatim
Algorithme 1 Saisie sure d’un nombre
 onction saisieEntier(): entier
    n: entier
    lire(n)
    retourner (n)
 fin fonction
 programme Saisie
    nb: entier
    nb := saisieEntier()
    ecrire (nb)
 fin programme
\endverbatim
 */
 
/*! 
 \def ERREUR_SAISIE
  Code d'erreur associe a la saisie
*/

/*! 
\fn int main (int argc, char** argv)
\author Adnane EL KASMI 
\version 0.2 TP 3
\date 03 Novembre 2019
\brief ProgC TP3 : Saisie d’entier
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>
#define ERREUR_SAISIE -1


int saisieEntier(void) {
	
 /* Déclarations */	
int n;        /* nombre entier  */
int n_retour; /* retour nombre entier  */

n_retour = scanf("%d",&n);

/* test de la lecture */
if ( n_retour == 0 ) {
	printf("ATTENTION !! Saisie incorrecte");
	exit(ERREUR_SAISIE);
   } else {
	       return n;
	      }
}
	      
int main (int argc, char *argv[]) // Algorithme 1 Saisie sure d’un nombre
{
	
 /* Déclarations */		
int nb; /* nombre entier  */

printf("Veillez saisir un entier : \n");

nb = saisieEntier();     
printf("L'entier saisi est : %d",nb);
}







