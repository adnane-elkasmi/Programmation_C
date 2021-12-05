/*! Commentaire de fichier (doxygen)
\file exo4.c
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
#include <time.h>
#include <stddef.h>
#define TRUE 1
#define FALSE 0


char* rechercheMotif(char* char_src, char* char_motif) {

int int_i;
int int_j;	
int int_trouver;

    for (int_i = 0; char_src[int_i] != '\0'; int_i++){
        int_trouver = TRUE;

int_j=0;       

        while (char_motif[int_j] != '\0' && char_src[int_i + int_j] != '\0') {
            if (char_motif[int_j] != char_src[int_i + int_j]) {
                int_trouver = FALSE;
                break;
            }
            int_j++;
        }

        if (int_trouver) {
            return &char_src[int_i];
        }
    }

    return NULL;
}

int main(int argc, char *argv[]) {
	
char char_src[50];
char char_motif[10];
int int_i;

printf("Veiller saisir src : ");
scanf("%s", char_src);

printf("Veiller saisir motif : ");
scanf("%s", char_motif);

printf("\n");

char* pchar_p = rechercheMotif(char_src, char_motif);

for (int_i = 0; char_src[int_i] != '\0'; int_i++) {
     printf("L'occurence '%c' a pour adresse : %p \n", char_src[int_i], &char_src[int_i]);
     }

printf("\n");

if ( pchar_p == 00000000 ) {
    printf("Il n'existe pas d'occurence de motif dans src !\n");	
    return 0;
    } else {    
    printf("La premiere occurence de motif dans src est a l'adresse : %p\n", pchar_p);
    return 0;
    }
}
