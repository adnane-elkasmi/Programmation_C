/*! Commentaire de fichier (doxygen)
\file Algorithme.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 5.0 TP 5
\date 11 Novembre 2019
\brief ProgC TP5 
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
\version 5.0 TP5
\date 11 Novembre 2019
\brief ProgC TP5
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/



/* Inclusion des entetes de librairies */
#include "foncproc.h"


int main(int argc, char *argv[]) 
{

 /* Déclarations */
char start;
char start_retour;

int choix;
int choix_retour;




 /* Pour initialiser la programme */
printf("Taper quelque chose et appuyez sur 'Enter' pour demarrer : ");
start_retour=scanf("%s",&start);
while ( start_retour == 1 ) {
	
	   printf("\n");	
	   printf(" ____________________________________________________________________________\n");
	   printf("|                                >> vecteur <<                               |\n");	   	
	   printf("|____________________________________________________________________________|\n");
	   printf("|                                                                            |\n");
	   printf("|  Taper 1 pour  : Inversion                                                 |\n");
	   printf("|  Taper 2 pour  : Somme                                                     |\n");           
	   printf("|  Taper 3 pour  : Produit Scalaire                                          |\n");
	   printf("|  Taper 4 pour  : Produit Vectoriel                                         |\n");
	   printf("|____________________________________________________________________________|\n");
	   printf("|                      >> Tableaux 2D : Tic-Tac-Toe <<                       |\n");
	   printf("|____________________________________________________________________________|\n");
	   printf("|                                                                            |\n");
	   printf("|  Taper 5 pour  : Tableaux 2D : Tic-Tac-Toe                                 |\n");
	   printf("|  Taper 6 pour  : Quitter                                                   |\n");
	   printf("|____________________________________________________________________________|\n");
	   printf("\n");
	   printf("Votre choix : ");
	   choix_retour=scanf("%d",&choix);
       if (choix_retour != 1  || choix < 1 || choix > 6 ) {
		   printf("Saisi invalide");
		   printf("\n");
		   return 0;
		   break;
		   
	   /* Sortir */    
	   } else if ( choix == 6 ) {                
		                         return 0;
		                         break;
	   /* Inversion */                          
	   } else if ( choix == 1 ) {   
		                          /* Déclarations */	
		                         int tint_tab[N];	/* tableau donné  */
		                         int i;
		                         
		                         printf("\n");	     
		                         printf("L'inversion d'un tableau de dimension %d\n",N);		
		                         printf("\n");
		                         
		                         for (i=0; i<N; i++) {
		                              printf("Entrer l'element %d du tableau (entier) : ",(i+1));
		                              tint_tab[i]=saisieEntier();
		                              }
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("Tableau avant inversion :\n");	
		                         printf("\n");				  
		                         afficherTableau(tint_tab);
		                         inversion(tint_tab); 
		                         printf("\n");	
		                         printf("\n");  
		                         printf("Tableau apres inversion :\n");  
		                         printf("\n");	   
		                         afficherTableau(tint_tab);    
		                         printf("\n");     
		                         
		                         								     
	    /* Somme */ 							     
	   } else if ( choix == 2 ) {  
		                         /* Déclarations */	
		                         int tint_tab1[N];	/* tableau donné  */
		                         int tint_tab2[N];	/* tableau donné  */
		                         int i;
		                         
		                         printf("\n");	     
		                         printf("La somme de deux vecteurs de dimension %d\n",N);		
		                         printf("\n");
		                         
		                         for (i=0; i<N; i++) {
		                              printf("Entrer l'element %d du premier vecteur (entier) : ",(i+1));
		                              tint_tab1[i]=saisieEntier();
		                              }
		                         printf("\n"); 	
		                         printf("\n");     
		                         for (i=0; i<N; i++) {
		                              printf("Entrer l'element %d du deuxieme vecteur (entier) : ",(i+1));
		                              tint_tab2[i]=saisieEntier();
		                              }   
		                                
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("Le premier vecteur :\n");	
		                         printf("\n");				  
		                         afficherTableau(tint_tab1);  
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("Le deuxieme vecteur :\n");	
		                         printf("\n");				  
		                         afficherTableau(tint_tab2); 
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("La somme des deux vecteurs :\n");	
		                         printf("\n");	
		                         somme(tint_tab1,tint_tab2);			  
		                           
		           
                                 
		                         
                                 
        /* Produit Scalaire  */                           
	   } else if ( choix == 3 ) { 
		                          /* Déclarations */	
		                         int tint_tab1[N];	/* tableau donné  */
		                         int tint_tab2[N];	/* tableau donné  */
		                         int i;
		                         
		                         printf("\n");	     
		                         printf("Le calcul du produit scalaire de deux vecteurs : \n");	
		                         printf("=> Dans une base orthonorme de dimension %d \n",N);	
		                         printf("\n");
		                         
		                         for (i=0; i<N; i++) {
		                              printf("Entrer l'element %d du premier vecteur (entier) : ",(i+1));
		                              tint_tab1[i]=saisieEntier();
		                              }
		                         printf("\n"); 	
		                         printf("\n");     
		                         for (i=0; i<N; i++) {
		                              printf("Entrer l'element %d du deuxieme vecteur (entier) : ",(i+1));
		                              tint_tab2[i]=saisieEntier();
		                              }   
		                                
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("Le premier vecteur :\n");	
		                         printf("\n");				  
		                         afficherTableau(tint_tab1);  
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("Le deuxieme vecteur :\n");	
		                         printf("\n");				  
		                         afficherTableau(tint_tab2); 
		                         printf("\n"); 	
		                         printf("\n");	     		                        	
		                         produitscalaire(tint_tab1,tint_tab2);
		                         
		                         		                         
	   /* Produit Vectoriel */                          
	   } else if ( choix == 4 ) {   
		                          /* Déclarations */	
		                         int tint_tab1[M];	/* tableau donné  */
		                         int tint_tab2[M];	/* tableau donné  */
		                         int i;
		                         
		                         printf("\n");	     
		                         printf("Le calcul du produit vectoriel de deux vecteurs : \n");	
		                         printf("=> Dans une base orthonorme B(U1,U2,U3) \n");	
		                         printf("\n");
		                         
		                         for (i=0; i<M; i++) {
		                              printf("Entrer l'element de U%d du premier vecteur (entier) : ",(i+1));
		                              tint_tab1[i]=saisieEntier();
		                              }
		                         printf("\n"); 	
		                         printf("\n");     
		                         for (i=0; i<M; i++) {
		                              printf("Entrer l'element de U%d du deuxieme vecteur (entier) : ",(i+1));
		                              tint_tab2[i]=saisieEntier();
		                              }   
		                                
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("Le premier vecteur :\n");	
		                         printf("\n");				  
		                         afficherTableauM(tint_tab1);  
		                         printf("\n"); 	
		                         printf("\n");	     
		                         printf("Le deuxieme vecteur :\n");	
		                         printf("\n");				  
		                         afficherTableauM(tint_tab2); 
		                         printf("\n"); 	
		                         printf("\n");	     		                        	
		                         produitvectoriel(tint_tab1,tint_tab2);
		                         
									  
		                          
                                 
		                         
                                 
        /* Tic-Tac-Toe */                           
	   } else if ( choix == 5 ) { 
		                         int tint_plateau[M][M];
		                         init(tint_plateau);
		                         tourDeJeu(tint_plateau);	   
		   		                  
		                         
	                             }	                              		                                      
}
}

