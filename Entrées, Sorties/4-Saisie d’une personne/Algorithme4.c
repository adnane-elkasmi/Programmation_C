/*! Commentaire de fichier (doxygen)
\file Algorithme4.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.2 TP 2
\date 03 Novembre 2019
\brief ProgC TP2 : Saisie d’une personne
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
\brief ProgC TP2 : Saisie d’une personne
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>
#include <stdlib.h>

/* Exercice 4: Saisie d’une personne */

int main(int argc, char *argv[]) // Algorithme 4 Saisie d’une personne
{
 /* Déclarations */	
char nom[29];        /* nom */	
char nom_retour;     /* Valeur de retour */ 
char prenom[29];     /* prenom */
char prenom_retour;  /* Valeur de retour */
int jour;            /* Jour de naissance */
int jour_retour;     /* Valeur de retour */
int mois;            /* Mois de naissance */
int mois_retour;     /* Valeur de retour */
int annee;           /* Annee de naissance */
int annee_retour;    /* Valeur de retour */

	/* Demande du nom */
	printf(" \n Veuillez entrer votre nom (remplacer l'espace par '_') : \n ");
	nom_retour = scanf("%s", nom);
	if ( nom_retour != 1 ) {
		printf("Le nom est invalide");
		return 0;
	} else {
	
	        /* Demande du prenom */
	        printf(" \n Veuillez entrer votre prenom (remplacer l'espace par '_') : \n ");
	        prenom_retour = scanf("%s",prenom);
            if ( prenom_retour != 1 ) {
		        printf("Le prenom est invalide");
		        return 0;
	        } else {
				
	                /* Demande de la date de naissance */
	                printf(" \n Veuillez entrer votre date de naissance : jj mm aaaa : \n ");
	                jour_retour = scanf("%d", &jour);
	                mois_retour = scanf("%d", &mois);
	                annee_retour = scanf("%d", &annee);
                    if ( jour_retour != 1 || jour < 1 || jour > 31 ) {
					    printf("Le jour est invalide");
		                return 0;	
					} else {
						    if ( annee_retour != 1 || annee < 0 ) {
							    printf("L'annee est invalide");
		                        return 0;
		                    } else {	
								    if ( mois_retour != 1 || mois < 1 || mois > 12 ) {
										printf("Le mois est invalide");
		                                return 0;	
								    } else {
														
                                            /* Changement du mois decimal en mois alphabetique, tester si le jour est dans le mois et en fin le compte rendu */
	                                        if ( mois == 1 ) {
											    printf(" \n Voici ce que vous avez entre : \n ");
	                                            printf(" \n Nom : %s \r", nom);
	                                            printf(" \n Prenom : %s \r", prenom);
	                                            printf(" \n Date de naissance : %d janvier %d \n ", jour, annee);
	                                            return 0;
	                                        }
	                                        else if ( mois == 2 ) {
												if ( jour == 30 || jour == 31 ) {
													printf("Fevrier ne contient pas le jour %d",jour);
													return 0;
												} else {
											            printf(" \n Voici ce que vous avez entre : \n ");
	                                                    printf(" \n Nom : %s \r", nom);
	                                                    printf(" \n Prenom : %s \r", prenom);														
	                                                    printf(" \n Date de naissance : %d fevrier %d \n ", jour, annee);
	                                                    return 0;
													   }
	                                        }
	                                        else if ( mois == 3 ) {
											    printf(" \n Voici ce que vous avez entre : \n ");
	                                            printf(" \n Nom : %s \r", nom);
	                                            printf(" \n Prenom : %s \r", prenom);												
	                                            printf(" \n Date de naissance : %d mars %d \n ", jour, annee);
	                                            return 0;
	                                        }
	                                        else if ( mois == 4 ) {
												if ( jour == 31 ) {
													printf("Avril ne contient pas le jour %d",jour);
													return 0;
												} else {
											            printf(" \n Voici ce que vous avez entre : \n ");
	                                                    printf(" \n Nom : %s \r", nom);
	                                                    printf(" \n Prenom : %s \r", prenom);														
	                                                    printf(" \n Date de naissance : %d avril %d \n ", jour,annee);
	                                                    return 0;
													   }
	                                        }
	                                        else if ( mois == 5 ) {
											    printf(" \n Voici ce que vous avez entre : \n ");
	                                            printf(" \n Nom : %s \r", nom);
	                                            printf(" \n Prenom : %s \r", prenom);												
	                                            printf(" \n Date de naissance : %d mai %d \n ", jour, annee);
	                                            return 0;
	                                        }
	                                        else if ( mois == 6 ) {
												if ( jour == 31 ) {
													printf("Juin ne contient pas le jour %d",jour);
													return 0;
												} else {
											            printf(" \n Voici ce que vous avez entre : \n ");
	                                                    printf(" \n Nom : %s \r", nom);
	                                                    printf(" \n Prenom : %s \r", prenom);														
	                                                    printf(" \n Date de naissance : %d juin %d \n ", jour,annee);
	                                                    return 0;
													   }
	                                        }
	                                        else if ( mois == 7 ) {
											    printf(" \n Voici ce que vous avez entre : \n ");
	                                            printf(" \n Nom : %s \r", nom);
	                                            printf(" \n Prenom : %s \r", prenom);												
	                                            printf(" \n Date de naissance : %d juillet %d \n ", jour, annee);
	                                            return 0;
	                                      	}
	                                        else if ( mois == 8 ) {
											    printf(" \n Voici ce que vous avez entre : \n ");
	                                            printf(" \n Nom : %s \r", nom);
	                                            printf(" \n Prenom : %s \r", prenom);												
	                                            printf(" \n Date de naissance : %d aout %d \n ", jour, annee);
	                                            return 0;
	                                      	}
	                                        else if ( mois == 9 ) {
												if ( jour == 31 ) {
													printf("Septembre ne contient pas le jour %d",jour);
													return 0;
												} else {	
											            printf(" \n Voici ce que vous avez entre : \n ");
	                                                    printf(" \n Nom : %s \r", nom);
	                                                    printf(" \n Prenom : %s \r", prenom);													
	                                                    printf(" \n Date de naissance : %d septembre %d \n ", jour, annee);
	                                                    return 0;
													   }
	                                        }
	                                        else if ( mois == 10 ) {
											    printf(" \n Voici ce que vous avez entre : \n ");
	                                            printf(" \n Nom : %s \r", nom);
	                                            printf(" \n Prenom : %s \r", prenom);												
	                                            printf(" \n Date de naissance : %d octobre %d \n ", jour, annee);
	                                            return 0;
	                                        }
	                                        else if ( mois == 11 ) {
												if ( jour == 31 ) {
													printf("Novembre ne contient pas le jour %d",jour);
													return 0;
												} else {	
											            printf(" \n Voici ce que vous avez entre : \n ");
	                                                    printf(" \n Nom : %s \r", nom);
	                                                    printf(" \n Prenom : %s \r", prenom);													
	                                                    printf(" \n Date de naissance : %d novembre %d \n ", jour, annee);
	                                                    return 0;
													   }
	                                        }
	                                        else if ( mois == 12 ) {
											    printf(" \n Voici ce que vous avez entre : \n ");
	                                            printf(" \n Nom : %s \r", nom);
	                                            printf(" \n Prenom : %s \r", prenom);												
	                                            printf(" \n Date de naissance : %d decembre %d \n ", jour, annee);
	                                            return 0;
	                                        }
									      	}                 
}
}
}
}
}

 

