/*! Commentaire de fichier (doxygen)
\file exo3.c
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
#define N 5

void IndexNull(int tint_tableau[N]){

int* pint_tableau;

for ( pint_tableau=&tint_tableau[0] ; pint_tableau<&tint_tableau[N] ; pint_tableau++) {
	if ( *pint_tableau==0 ) {
		printf("L'index %ld du tableau est null\n",(pint_tableau - &tint_tableau[0]));
	}
}

}	

int main ( int argc , char * * argv ) {
	
int tint_tableau[N];

tint_tableau[0] = 5;
tint_tableau[1] = 0;
tint_tableau[2] = 1;
tint_tableau[3] = 0;
tint_tableau[4] = 0;

int i;
printf("Soit le tableu : [");
for (i=0;i<N;i++) {
	 printf(" %d",tint_tableau[i]);	
     }
printf(" ]\n");
printf("\n");

IndexNull(tint_tableau);

return 0;
}
