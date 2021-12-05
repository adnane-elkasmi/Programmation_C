/*! Commentaire de fichier (doxygen)
\file Algorithme3.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 3
\date 03 Novembre 2019
\brief ProgC TP3 : Probleme d’appel de fonction
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
Algorithme 3 Échange de valeurs
  procedure echange(nb1, nb2: entier)
   tmp: entier
   ecrire ("Avant échange")
   ecrire ("Nb1 = ", nb1)
   ecrire ("Nb2 = ", nb2)
   tmp := nb1
   nb1 := nb2
   nb2 := tmp
   ecrire ("Après échange")
   ecrire ("Nb1 = ", nb1)
   ecrire ("Nb2 = ", nb2)
 fin procedure
 programme Toto
   nb1, nb2: entier
   nb1 := 5
   nb2 := 7
   ecrire ("Avant appel de la fonction")
   ecrire ("Nb1 = ", nb1)
   ecrire ("Nb2 = ", nb2)
   ecrire ("Appel de la fonction echange")
   echange(nb1, nb2)
   ecrire ("Après appel de la fonction")
   ecrire ("Nb1 = ", nb1)
   ecrire ("Nb2 = ", nb2)
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
\brief ProgC TP3 : Probleme d’appel de fonction
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>
#define ERREUR_SAISIE -1



void echange(int nb1, int nb2) {
	
 /* Déclarations */	
int tmp;        /* nombre entier  */
printf("Avant echange : \n");
printf("Nb1 = %d \n",nb1);
printf("Nb2 = %d \n",nb2);
tmp = nb1;
nb1 = nb2;
nb2 = tmp;
printf("Apres echange : \n");
printf("Nb1 = %d \n",nb1);
printf("Nb2 = %d \n",nb2);
}

	      
int main (int argc, char *argv[]) // Algorithme 3 toto
{

 /* Déclarations */	
int nb1;        /* nombre entier  */
int nb2;        /* nombre entier  */

nb1 = 5;
nb2 = 7;

printf("Avant appel de la fonction : \n");
printf("Nb1 = %d \n",nb1);
printf("Nb2 = %d \n",nb2);
printf("Appel de la fonction : \n");
echange(nb1,nb2);
printf("Apres appel de la fonction : \n");
printf("Nb1 = %d \n",nb1);
printf("Nb2 = %d \n",nb2);

return 0;
}









