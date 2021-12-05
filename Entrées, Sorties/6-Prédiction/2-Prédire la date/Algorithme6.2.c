/*! Commentaire de fichier (doxygen)
\file Algorithme6.2.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Prédiction 2: Prédire la date
*/

/*! \page exemple_desc.c
 *  \section un Introduction
 *  Ce programme est la pour faire une demonstration sur l'utilisation
 *  des differents concepts vus en cours. En plus de cela, il y a
 *  aussi des exemples d'utilisation de doxygen...
 *
 *  \section oups Objectif du programme
 *  Le programme predit le jour prochain. C'est un programme tres simple.
 */


/*! 
\fn int main (int argc, char** argv)
\author Adnane EL KASMI
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Prédiction 2: Prédire la date
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/


/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>

/* Exercice 6: Prédiction 2: Prédire la date */

int main(int argc, char *argv[]) // Algorithme 6 Prédiction 2: Prédire la date
{

 /* Déclarations */	
int jour;            /* Variable de jour         */
int jour_retour;     /* Variable de retour       */
int mois;             /* Variable de mois         */
int mois_retour;      /* Variable de retour       */
int annee;            /* Variable d'annee         */
int annee_retour;     /* Variable de retour       */
int jourf;           /* Variable de jour finale  */
int moisf;            /* Variable de mois finale  */
int anneef;           /* Variable d'annee finale  */

 /* Demande de la date */
printf("Entrez le jour (0-31), puis le mois (1-12) et enfin l'annee :");
jour_retour = scanf("%d",&jour);
mois_retour = scanf("%d",&mois);
annee_retour = scanf("%d",&annee);

 /* Verification de l'entree du jour */
if (jour_retour != 1 || jour > 31 || jour < 1)   {
	printf ("Jour saisi invalide\n");
	return 0;
    } else {
		
		    /* Verification de l'entree du mois */
             if (mois_retour != 1 || mois > 12 || mois < 1) {
	         printf ("Mois saisi invalide\n");
	         return 0;
	         } else {
				 
                     /* Verification de l'entree de l'annee */
                     if (annee_retour != 1 || annee < 0)  {
	                 printf ("Annee saisie ivalide\n");
	                 return 0;
	                 } else {
						 
                             /* Application de la prediction */
                             jourf = jour ;
                             moisf = mois ;
                             anneef = annee ;
		                     if ((mois == 12) && (jour == 31)) {       /* Fin de l'annee */
	                             anneef = (annee + 1);
	                             moisf = 1;
	                             jourf = 1;
                                 printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                             return(0);
                             } else {
                                     if (mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12) {      /* Mois ayants 31 jours */
                                        if (jour==31) {
                                           moisf = (mois + 1) ; /* pas de probleme pour mois 12 il est traite en premier */
                                           jourf = 1 ;
                                           printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                       return(0);
                                        } else {
                                                jourf = (jour + 1) ;
                                                printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                            return(0);
                                                }
                                     } else if (mois==4||mois==6||mois==9||mois==11) {                    /* Mois ayants 30 jours */
                                                if (jour==30) {
                                                    moisf = (mois + 1) ;
                                                    jourf = 1 ;
                                                    printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                                return(0);
                                                } else if (jour==31) {
													                  printf("Le mois %d ne contient pas le jour 31",mois);
													                  return 0;
                                                } else {
                                                        jourf = (jour + 1) ;
                                                        printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                                    return(0);
                                                       }
                                     } else if (mois==2) {                /* Février en prenant en compte les années bisextiles */
                                                        if (((annee%4==0) && (annee%100!=0)) || (annee%400==0)) {   /* Test de l'année bisextile */
                                                            if (jour==29) {
                                                            jourf = 1 ;
                                                            moisf = (mois + 1) ;
                                                            printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                                        return(0);
                                                            } else if (jour==30 || jour==31) {
																                              printf("Fervrier ne contient pas le jour %d",jour);
																                              return 0;																                             
                                                            } else {
                                                                    jourf = (jour + 1) ;
                                                                    printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                                                return(0);
                                                                   }
                                                        } else {
                                                                if (jour==28) {
                                                                    jourf =1 ;
                                                                    moisf = (mois + 1) ;
                                                                    printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                                                return(0);
                                                                } else if (jour==29 || jour==30 || jour==31) {
																          printf("Fervrier ne contient pas le jour %d",jour);
																          return 0;
                                                                } else {
                                                                        jourf = (jour + 1) ;
                                                                        printf("Dans un jour, il sera %d / %d / %d \n" , jourf , moisf, anneef);
	                                                                    return(0);
                                                                        }
                                                                }        
                                    }
										

                                    
                                   }
							   }
							}
}							            
}
