/*! Commentaire de fichier (doxygen)
\file fonctions.h
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 8.0 TP8
\date 19 Decembre 2019
\brief Programmation Procedural C : TP8
*/


/*! Declaration des entetes et structures */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERREUR_SAISIE -1

typedef struct complexe{
    double reel;
    double imaginaire;
}complexe;



typedef struct solutionEqu2D{
		int nbRacines;
		complexe racine1;
		complexe racine2;
}solutionEqu2D;


typedef struct solutionEqu3D{
		int nbRacines;
		complexe racine1;
		complexe racine2;
		complexe racine3;
}solutionEqu3D;


/*! Declaration des prototypes des fonctions / procedures */

void test_scanf(int int_retour);

solutionEqu2D ResolutionEq2ndDegree(double double_a, double double_b, double double_c);

solutionEqu3D ResolutionEq3emeDegree(double double_a, double double_b, double double_c, double double_d);
