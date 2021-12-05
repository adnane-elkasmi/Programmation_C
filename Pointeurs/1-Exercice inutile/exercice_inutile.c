/*! Commentaire de fichier (doxygen)
\file exercice_inutile.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.6 TP 6
\date 22 Novembre 2019
\brief ProgC TP6 
*/

/*! \page exemple_desc.c
 *  \section un Introduction
 *  Ce programme est la pour faire une demonstration sur l'utilisation
 *  des differents concepts vus en cours. En plus de cela, il y a
 *  aussi des exemples d'utilisation de doxygen...
 *
 *  \section oups Objectif du programme
 *  Le programme demande a l'utilisateur des operations mathematique qu'il veut entre 3.
 */


/*!
\fn int main (int argc, char** argv)
\author Adnane EL KASMI
\version 0.6 TP6
\date 22 Novembre 2019
\brief ProgC TP6
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
#include <time.h>
#define ERREUR_SAISIE -1

int main ( int argc , char * * argv ) {
	
int int_i;
int* pint_i;

int_i = 5;
pint_i = &int_i;

printf("La valeur de i = %d \n",int_i);

*pint_i = 3;


printf("La valeur de i = %d \n",int_i);

return 0;
}
