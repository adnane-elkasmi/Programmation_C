/*! Commentaire de fichier (doxygen)
\file Algorithme7.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Opérations mathématiques
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
\brief ProgC TP2 : Opérations mathématiques
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) // Algorithme 7 Opérations mathématiques
{

 /* Déclarations */
char start;
char start_retour;

int choix;
int choix_retour;

int n;
int n_retour;
int fact;

int x;
int y;
int r;
int xf;
int yf;
int xy_retour;

float a;
float b;
float c;
float abc_retour;
float delta;
float s;
float s1;
float s2;
float s3;

 /* Pour initialiser la programme */
printf("Taper quelque chose et appuyez sur 'Enter' pour demarrer : ");
start_retour=scanf("%s",&start);
while ( start_retour == 1 ) {
	   printf("\n");
	   printf("Taper 1 pour : Calculer la factorielle d'un entier\n");
	   printf("Taper 2 pour : Calculer le pgcd de deux entiers\n");
	   printf("Taper 3 pour : Resoudre une equation du second degre dans R\n");
	   printf("Taper 4 pour : Quitter\n");
	   choix_retour=scanf("%d",&choix);
       if (choix_retour != 1 || choix < 1 || choix > 4 ) {
		   printf("Saisi invalide");
		   printf("\n");
		   
	   /* Sortir */    
	   } else if ( choix == 4 ) {                
		                         return 0;
		                         break;
	   /* Factorielle */                          
	   } else if ( choix == 1 ) {                                          
		                         printf("Veiller saisir un entier : ");
		                         n_retour = scanf("%d",&n);
		                         if ( n_retour != 1 ) {
									 printf("Saisi invalide");
	                                 printf("\n"); 
		                         } else if ( n==0 || n==1 ) {
									        printf("%d!=1",n);
	                                        printf("\n"); 
	                             } else {
	                                     for(fact =1; n > 1; n--) {
	                                         fact = (fact * n);
	                                      }
	                                      printf("%d!=%d",n,fact); 
	                                      printf("\n"); 
									     }
	    /* PGCD */ 							     
	   } else if ( choix == 2 ) {                                                        
		                         printf("Veiller saisir deux entiers positifs : \n"); 
		                         xy_retour=scanf("%d %d",&x,&y);
		                         if ( xy_retour != 2 || x < 0 || y < 0 ) {
									 printf("Saisi invalide");
	                                 printf("\n"); 
		                         } else { 
									     if ( x > y ) {
                                             xf = y;
                                             r = (x % y);
                                         } else {
                                                 xf = x;
                                                 r= (y % x);
                                         }
                                         while (r!=0) {
                                                yf = xf;
                                                xf = r;
                                                r= (yf % xf);          
                                                      }
                                         printf("Le PGCD de %d et %d est %d",x,y,xf);
                                         printf("\n"); 
                                 }
        /* Resoudre equation seconde degre ( aussi 1er degre (bonus) ) */                           
	   } else if ( choix == 3 ) {  
		                         printf("Resoudre aX*X+bX+c=0 \n");
		                         printf("Veiller saisir la valeur de a, puis de b et enfin de c : \n");
		                         abc_retour=scanf("%f %f %f",&a,&b,&c);
		                         if ( abc_retour != 3 ) {
									printf("Saisi invalide");
		                            printf("\n"); 
		                         } else {
									     delta = ((b * b)-(4 * a * c)); 
                                         if ( a==0 ) {
	                                                  printf("C'est une equation de premier degre :");
	                                                  printf("\n"); 
	                                                  if ( b==0 ){
														  printf("L'equation n'admet pas de solution");
														  printf("\n");
													  } else {
														      s3 = (-c / b);
														      printf("L'unique solution de l'equation %fX+%f=0 est : %f",b,c,s3);	
														      printf("\n");
													  }  
                                         } else { 
	                                             if ( delta < 0 ) {
	                                                               printf("L'equation n'admet pas de solution dans R");
	                                                               printf("\n"); 
                                                 } else if ( delta == 0 ) {
			                                                s = (-b / (2 * a));
			                                                printf("L'unique solution de l'equation %fX*X+%fX+%f=0 est : %f",a,b,c,s);
		  	                                                printf("\n"); ;
		                                         } else if ( delta > 0 ) {
			                                               s1 = ((-b - (sqrt(delta))) / (2 * a));       
	                                                       s2 = ((-b + (sqrt(delta))) / (2 * a));
	                                                       printf("Les deux solutions de l'equation %fX*X+%fX+%f=0 sont : %f et %f",a,b,c,s1,s2);
			                                               printf("\n"); 
	                                              }
	                                     }	                              
		                                                                      
}		   
	   }
	   
	   
}
}

