/*! Commentaire de fichier (doxygen)
\file Algorithme1.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Saisie d’un nombre
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
Algorithme 1 Saisie d’un nombre
   programme SaisieNombre
	nb: entier
	écrire ("Veuillez saisir un nombre : ")
	lire(nb)
	écrire (nb)
   fin programme
\endverbatim
 */

/*! 
\fn int main (int argc, char** argv)
\author Adnane EL KASMI 
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Saisie d’un nombre
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>

/* Exercice 1: Saisie d’un nombre */

int main (int argc, char *argv[]) // Algorithme 1 Saisie d’un nombre
{
 /* Déclarations */
int nb;          /* nombre entier */
int int_retour; /* valeur entier saisie */

 /* Saisie d'un entier */
printf("Veuillez saisir un nombre : "); 
int_retour = scanf("%d", &nb); 

 /* Test de l'entree */
if ( int_retour == 1 ) {
   printf("Le nombre saisi est : %d",nb);
} else { 
	    printf("Le nombre saisi n'est pas un entier.\n"); 
	    }	
return 0;
}
