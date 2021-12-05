/*! Commentaire de fichier (doxygen)
\file Algorithme2.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Saisie de deux entiers
*/

/*! \page exemple_desc.c
 *  \section un Introduction
 *  Ce programme est la pour faire une demonstration sur l'utilisation
 *  des differents concepts vus en cours. En plus de cela, il y a
 *  aussi des exemples d'utilisation de doxygen...
 *
 *  \section oups Objectif du programme
 *  Le programme demande les choix a l'utilisateur, et
 *  affiche les choix de celui-ci. C'est un programme tres simple.

 *  \section deux Algorithme
 *  Voici une facon de presenter un algorithme. L'algorithme ici
 *  presente est celui qui est traduit par la suite. 
 *
\verbatim
Algorithme 1 Saisie d’un nombre
   programme Saisie2Nombre
	nb1 , nb2: entier
	écrire ("Veuillez saisir un nombre : ")
	lire(nb1)
	écrire (nb1)
	écrire ("Veuillez saisir un nombre : ")
	lire(nb2)
	écrire (nb2)
   fin programme
\endverbatim
 */

/*! 
\fn int main (int argc, char** argv)
\author Adnane EL KASMI
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Saisie de deux entiers
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/



/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>

/* Exercice 2: Saisie de deux entiers */

int main (int argc, char *argv[]) // Algorithme 2 Saisie deux entiers
{
 /* Déclarations */	
int nb1;        /* nombre premier entier  */
int nb2;        /* nombre second entier  */
int int_retour; /* valeur entier saisie  */

 /* Saisie des données */
printf("Veuillez saisir deux nombres : \n");
int_retour = scanf("%d %d" , &nb1 , &nb2);

 /* Test des entrees */
if ( int_retour == 2 ) {   
   printf("Le premier  nombre est : %d \n",nb1);
   printf("Le deuxieme nombre est : %d \n",nb2);
} else { printf("Le nombre saisi n'est pas un entier.\n"); }
return 0;
}

