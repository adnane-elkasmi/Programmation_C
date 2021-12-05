/*! Commentaire de fichier (doxygen)
\file Algorithme4.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 3
\date 03 Novembre 2019
\brief ProgC TP3 : Programme un peu plus grand
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
\version 0.2 TP3
\date 03 Novembre 2019
\brief ProgC TP3 : Programme un peu plus grand
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




void affichageTriangle(int n) {
	
 /* Déclarations */
int i;
int j;
int k;

for(i=0; i<n; i++)
  {
   for(j = n-1-i; j > 0; j--)
      printf(" ");
   for(k = 0; k < i*2+1; k++)               
      printf("*");        
   printf("\n");
  }
   

}

void tableMultiplication(int n) {

int i;
for (i=1;i<11;i++) {
	printf("\n");
printf("%d x %d = %d \n ",i,n,(i*n));
}

}
	
void estAmstrong(int n) {
	
 
int nbr;
int a;
int tmp;
int somme;

somme = 0;  
  

nbr = n; 
tmp=nbr;  
  
while(nbr>0)  { 
    a=(nbr%10);  
    somme=(somme+(a*a*a));  
    nbr=(nbr/10);  
    }  
  if (tmp==somme) {  
    printf(" %d est un nombre Armstrong",tmp);  
  } else {  
    printf(" %d n'est pas un nombre Armstrong",tmp); 
  } 
 

	
}	

int main(int argc, char *argv[]) // Algorithme 4
{

 /* Déclarations */
char start;
char start_retour;

int choix;
int choix_retour;

int n;


 /* Pour initialiser la programme */
printf("Taper quelque chose et appuyez sur 'Enter' pour demarrer : ");
start_retour=scanf("%s",&start);
while ( start_retour == 1 ) {
	   printf("\n");
	   printf("Taper 1 pour : Affichage un triangle\n");
	   printf("Taper 2 pour : Table de multiplication\n");
	   printf("Taper 3 pour : Nombre de Amstrong\n");
	   printf("Taper 4 pour : Quitter\n");
	   choix_retour=scanf("%d",&choix);
       if (choix_retour != 1 || choix < 1 || choix > 4 ) {
		   printf("Saisi invalide");
		   printf("\n");
		   
	   /* Sortir */    
	   } else if ( choix == 4 ) {                
		                         return 0;
		                         break;
	   /* Affichage d’un triangle */                          
	   } else if ( choix == 1 ) {   
		                         printf("\n");                                       
		                         printf("Veillez saisir un entier n : \n");
                                 n = saisieEntier();
		                         affichageTriangle(n);
		                         
									     
	    /* Table de multiplication */ 							     
	   } else if ( choix == 2 ) {  
		                         printf("\n"); 		                                                         
		                         printf("Veillez saisir un entier n : \n");
                                 n = saisieEntier();
                                 tableMultiplication(n);
                                 
		                         
                                 
        /* Nombre d’Amstrong */                           
	   } else if ( choix == 3 ) { 
		                         printf("\n"); 		   
		   		                 printf("Veillez saisir un entier n : \n");
                                 n = saisieEntier(); 
		                         estAmstrong(n);
		                         
	                                     }	                              
		                                                                      

	   
	   
}
}

