/*! Commentaire de fichier (doxygen)
\file foncproc.h
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 5.0 TP 5
\date 18 Novembre 2019
\brief Programmation Procedural C : TP5, fichier header contenant les prototypes des fonctions / procedures.
*/

/* Inclusion des entetes de librairies */

#ifndef __FONCPROC_H__
#define __FONCPROC_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
#include <time.h>
#define ERREUR_SAISIE -1
#define N 10
#define M 3 /* reserve pour produit vectoriel et tic tac toe */
/*--------------------- Vecteur --------------------------------------*/
int saisieEntier(void);
void randTablau(int tint_tab[N], int max);
void afficherTableau(int tint_tab[N]);
void afficherTableauM(int tint_tab[M]);
void inversion(int tint_tab[N]);
void somme(int tint_tab1[N],int tint_tab2[N]);
int produitscalaire(int tint_tab1[N],int tint_tab2[N]);
void produitvectoriel(int tint_tab1[M],int tint_tab2[M]);
/*----------------- TIC TaC TOE --------------------------------------*/
void init(int tint_plateau[M][M]);
void affichage(int tint_plateau[M][M]);
int jouer(int tint_plateau[M][M], int int_joueur, int int_x, int int_y);
int aGane(int tint_plateau[M][M]);
void tourDeJeu(int tint_plateau[M][M]);

#endif
