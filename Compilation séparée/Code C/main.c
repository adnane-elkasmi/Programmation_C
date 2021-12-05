/*! Commentaire de fichier (doxygen)
\file main.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 4
\date 08 Novembre 2019
\brief ProgC TP4 
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
\version 0.2 TP4
\date 08 Novembre 2019
\brief ProgC TP4
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/



/* Inclusion des entetes de librairies */
#include "fonctions.h"


int main(int argc, char *argv[]) // Algorithme 4
{

 /* Déclarations */
char start;
char start_retour;

int choix;
int choix_retour;

unsigned int n=0;
float racine2; 


 /* Pour initialiser la programme */
printf("Taper quelque chose et appuyez sur 'Enter' pour demarrer : ");
start_retour=scanf("%s",&start);
while ( start_retour == 1 ) {
	
	   printf("\n");	
	   printf("_____________________________________________________________________________\n");
	   printf("|                    >> Approximation de Pi <<                               |\n");	   	
	   printf("|____________________________________________________________________________|\n");
	   printf("|                                                                            |\n");
	   printf("|  Taper 1 pour la methode de : Aire de disque par quadrillage (Monte Carlo) |\n");
	   printf("|  Taper 2 pour la methode de : John Wallis                                  |\n");           
	   printf("|  Taper 3 pour la methode de : Madhava de Sangamagrama                      |\n");
	   printf("|                                                                            |\n");
	   printf("|____________________________________________________________________________|\n");
	   printf("|             >> Approximation de racine carre de 2 <<                       |\n");
	   printf("|____________________________________________________________________________|\n");
	   printf("|                                                                            |\n");
	   printf("|  Taper 4 pour la methode de : Isaac Newton                                 |\n");
	   printf("|  Taper 5 pour la methode de : Edmund Halley                                |\n");
	   printf("|  Taper 6 pour la methode de : Theon de Smyrne                              |\n");
	   printf("|  Taper 7 pour               : Quitter                                      |\n");
	   printf("|____________________________________________________________________________|\n");
	   printf("\n");
	   printf("Votre choix : ");
	   choix_retour=scanf("%d",&choix);
       if (choix_retour != 1  || choix < 1 || choix > 7 ) {
		   printf("Saisi invalide");
		   printf("\n");
		   return 0;
		   break;
		   
	   /* Sortir */    
	   } else if ( choix == 7 ) {                
		                         return 0;
		                         break;
	   /* Aire de disque par quadrillage (Monte Carlo) */                          
	   } else if ( choix == 1 ) {   
		                         printf("\n");                                       
		                         printf("Combien de jets voulez vous effectuer ? : "); // le nombre de jets
                                 n = saisieEntier();
		                         Monte_Carlo(n);
		                         								     
	    /* John Wallis */ 							     
	   } else if ( choix == 2 ) {  
		                         printf("\n"); 		                                                         
		                         printf("Veillez saisir un entier positif : ");
                                 n = saisieEntier();
                                 John_Wallis(n);
                                 
		                         
                                 
        /* Madhava de Sangamagrama */                           
	   } else if ( choix == 3 ) { 
		                         printf("\n"); 		   
		   		                 printf("Veillez saisir un entier positif : ");
                                 n = saisieEntier(); 
		                         Madhava_de_Sangamagrama(n);
		                         		                         
	   /* Isaac Newton */                          
	   } else if ( choix == 4 ) {   
		                         printf("\n");                                       
		                         printf("Veillez saisir un entier positif : ");
                                 n = saisieEntier();
		                         racine2=Isaac_Newton(n);
		                         printf("L'approximation de racine carre de 2 par la methode de Isaac Newton est : %f\n",racine2);
                                 printf("\n");
		                         
									     
	    /* Edmund Halley */ 							     
	   } else if ( choix == 5 ) {  
		                         printf("\n");                                       
		                         printf("Veillez saisir un entier positif : ");
                                 n = saisieEntier();
		                         racine2=Edmund_Halley(n);
		                         printf("L'approximation de racine carre de 2 par la methode de Edmund Halley est : %f\n",racine2);
                                 printf("\n");
                                 
		                         
                                 
        /* Theon de Smyrne */                           
	   } else if ( choix == 6 ) { 
		                         printf("\n"); 		   
		   		                 printf("Veillez saisir un entier positif : ");
                                 n = saisieEntier(); 
		                         Theon_de_Smyrne(n);
		                         
	                                     }	                              		                                      
}
}
