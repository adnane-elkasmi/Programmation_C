/*! Commentaire de fichier (doxygen)
\file Algorithme5.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Division d’entier
*/

/*! \page exemple_desc.c
 *  \section un Introduction
 *  Ce programme est la pour faire une demonstration sur l'utilisation
 *  des differents concepts vus en cours. En plus de cela, il y a
 *  aussi des exemples d'utilisation de doxygen...
 *
 *  \section oups Objectif du programme
 *  Le programme divise 2 entiers. C'est un programme tres simple.

 *  \section deux Algorithme
 *  Voici une facon de presenter un algorithme. L'algorithme ici
 *  presente est celui qui est traduit par la suite. 
 *
\verbatim
Algorithme 2 Division d’entier
	programme Division
	n,d: entier
	écrire ("Veuillez saisir le numérateur et le dénominateur : ")
	lire(n)
	lire(d)
	si d!=0 alors
		écrire (n,"/",d,"=",n/d)
	sinon
		écrire ("division impossible")
	fin si
	fin programm
\endverbatim
 */

/*! 
\fn int main (int argc, char** argv)
\author Adnane EL KASMI
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Division d’entier
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/


/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>

/* Exercice 5: Division d’entier */

int main(int argc, char *argv[]) // Algorithme 5 Division d’entier
{
 /* Déclarations */	
int n;
int d;
int int_retour;

  /* Saisie des données */
printf("Veuillez saisir le numerateur et le denominateur : \n");
int_retour = scanf("%d %d" , &n , &d);

/* Test des entrees */
if ( int_retour == 2 ) {   
	if ( d != 0 ) {
		printf("%d/%d=%d ",n,d,n/d); 
		return 0;
	} else { printf("Division impossible");
		     return 0;
		   }
} else { printf("Le nombre saisi n'est pas un entier.");
	     return 0;
	   }  
}		    	

/* Remarque: il retourne le quotion de la division euclidienne,
   les deux 4.2 et 4.3 (meme 2; et 2.4) entrées ne permettent pas 
   d’obtenir un résultat.
   Ces resultats s'expliquent su fait que la virgule ou le point 
   est compté comme denominateur */
   

