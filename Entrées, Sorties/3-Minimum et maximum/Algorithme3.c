/*! Commentaire de fichier (doxygen)
\file Algorithme3.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Minimum et maximum
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
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Minimum et maximum
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>

/* Exercice 3: Minimum et maximum */

int main(int argc, char *argv[]) // Algorithme 3 Minimum et maximum
{
 /* Déclarations */
float t[50];       /* tableau donné  */
int n;             /* dimension (nombre de reels)  */
int n_retour;      /* valeur dimension saisie  */
float r_retour;    /* valeur reel saisie  */
int i;             /* indice courant */
int min;           /* position du minimum */
int max;           /* position du maximum */
 
 /* Saisie des données */
printf("Veillez entrer le nombre de reels a saisir (max.50) : ");
n_retour = scanf("%d", &n );

 /* test de nombre de reels a saisir */
if ( n_retour != 1 ) {
    printf("Le nombre saisi n'est pas un entier\n"); 
	return 0;
} else { printf("\n");
	     for (i=0; i<n; i++) {
             printf("Entrer l'element %d (nombre reel) : ", i);
             r_retour = scanf("%f", &t[i]);
             
              /* test de reel saisi */
             if ( r_retour != 1 ) {				 
				 printf("le nombre saisi n'est pas un reel");
				 return 0;
				 break;
			 }	 
		  }
				  
         /* Affichage des valeurs saisies */
         printf("\n");
         printf("Les valeurs saisies : ");
         printf("[ ");
         for (i=0; i<n; i++) {
              printf("%f ", t[i]);
              }
         printf("]\n");
             
         /* Recherche du maximum et du minimum */
         min=0;
         max=0;
         for (i=0; i<n; i++) {
              if (t[i]>t[max]) { max=i; }
              if (t[i]<t[min]) { min=i; } 
              }
     
         /* Edition du résultat */ 
         printf("\n");  
         printf("La position du minimum : %d\n", min);
         printf("La position du maximum : %d\n", max);
         printf("La  valeur  du minimum : %f\n", t[min]);
         printf("La  valeur  du maximum : %f\n", t[max]);
         return 0; 
         }
}
