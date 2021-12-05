/*! Commentaire de fichier (doxygen)
\file fonctions.double_c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 8.0 TP8
\date 19 Decembre 2019
\brief Programmation Procedural C : TP8
*/



#include "fonctions.h"



/*! Commentaire de la procedure test_scanf (doxygen)
\fn void test_scanf(int int_retour)
\brief procedure qui permet de tester si une lecture est correcte ou non
\param int_retour entier en entree
*/
void test_scanf(int int_retour){
	if (int_retour != 1) {
		printf("Il y double_a un probleme ! \n");
		exit(ERREUR_SAISIE);
	}
}



/*! Commentaire de la fonction ResolutionEq2ndDegree (doxygen)
\fn solutionEqu2D ResolutionEq2ndDegree(double double_a, double double_b, double double_c)
\brief fonction qui permet de resoudre une equation du second degree dans C
\param double_a premier coefficient reel de l'equation du 2nd degree
\param double_b deuxieme coefficient reel de l'equation du 2nd degree
\param double_c troisieme coefficient reel de l'equation du 2nd degree
\return resolue variable contenant le ou les solution(s) de l'equation demandee
*/
solutionEqu2D ResolutionEq2ndDegree(double double_a, double double_b, double double_c){
	double double_delta;
	solutionEqu2D resolue;
	resolue.racine1.reel = 0;
	resolue.racine1.imaginaire = 0;
	if (double_a < 0){
		double_a = -double_a;
		double_b = -double_b;
		double_c = -double_c;
	}
	else if (double_a == 0 && double_b != 0){
		resolue.nbRacines = 1;
		resolue.racine1.reel = -double_c/double_b;
		return resolue;
	}
	else if (double_a == 0 && double_b == 0 && double_c == 0){
		printf("Tous les coefficients de l'equation sont nuls ! rien a resoudre.\n");
		exit(1);
	}
	else if (double_a == 0 && double_b == 0 && double_c != 0){
		printf("%lf = 0, l'equation n'admet pas de solution !\n", double_c);
		exit(ERREUR_SAISIE);
	}
	else {
		double_delta = double_b*double_b-(4*double_a*double_c);
		if (double_delta == 0){
			resolue.nbRacines = 1;
			resolue.racine1.reel = -double_b/(2*double_a);
			resolue.racine1.imaginaire = 0;
			resolue.racine2 = resolue.racine1;
			return resolue;
		}
		else if (double_delta > 0){
			resolue.nbRacines = 2;
			resolue.racine1.reel = (-double_b + sqrt(double_delta))/(2*double_a);
			resolue.racine1.imaginaire = 0;
			resolue.racine2.reel = (-double_b - sqrt(double_delta))/(2*double_a);
			resolue.racine2.imaginaire = 0;
			return resolue;
		}
		else {
			resolue.nbRacines = 2;
        	resolue.racine1.reel = -double_b/(2*double_a);
			resolue.racine1.imaginaire = sqrt(-double_delta)/(2*double_a);
        	resolue.racine2.reel = -double_b/(2*double_a);
			resolue.racine2.imaginaire = -sqrt(-double_delta)/(2*double_a);
			return resolue;
		}

	}
	return resolue;
}




/*! Commentaire de la fonction ResolutionEq3emeDegree (doxygen)
\fn solutionEqu3D ResolutionEq3emeDegree(double double_a, double double_b, double double_c, double d)
\brief fonction qui permet de resoudre une equation du second degree dans C
\param double_a premier coefficient reel de l'equation du 3eme degree
\param double_b deuxieme coefficient reel de l'equation du 3eme degree
\param double_c troisieme coefficient reel de l'equation du 3eme degree
\param double_d quatrieme coefficient reel de l'equation du 3eme degree
\return resolue variable contenant le ou les solution(s) de l'equation demandee
*/
solutionEqu3D ResolutionEq3emeDegree(double double_a, double double_b, double double_c, double d){
	solutionEqu3D resolue;
	double double_p;
	double double_q;
	double double_delta1;
	double double_A;
	double double_B;
	double double_C;
	solutionEqu2D solPartielle;

	double_p = (3.0*double_a*double_c - pow(double_b,2))/(3.0*pow(double_a,2));
	double_q = (2.0*pow(double_b,3) - 9.0*double_a*double_b*double_c + 27*pow(double_a,2)*d)/(27*pow(double_a,3));
	double_delta1 = pow(double_q,2) + (4.0*pow(double_p,3))/27.0;


	if (double_delta1 == 0){
		resolue.nbRacines = 1;
		resolue.racine1.reel = cbrt((-double_q/2)) + cbrt((-double_q/2)) - (double_b/3*double_a);
		resolue.racine1.imaginaire = 0;
		resolue.racine2 = resolue.racine1;
		resolue.racine3 = resolue.racine1;
		return resolue;
	}
	else if (double_delta1 > 0){
		resolue.nbRacines = 3;
		resolue.racine1.reel = cbrt(((-double_q - sqrt(double_delta1))/2.0)) + cbrt((-double_q + sqrt(double_delta1))/2.0) - (double_b/3.0*double_a);
		resolue.racine1.imaginaire = 0;
		double_A = double_a;
		double_B = double_b + double_a*resolue.racine1.reel;
		double_C = double_c + (double_b + double_a*resolue.racine1.reel)*resolue.racine1.reel;
		solPartielle = ResolutionEq2ndDegree(double_A, double_B, double_C);
		resolue.racine2 = solPartielle.racine1;
		resolue.racine3 = solPartielle.racine2;
		return resolue;
	}
	else{
		resolue.nbRacines = 3;
		resolue.racine1.reel = cbrt(((-double_q - sqrt(double_delta1))/2.0)) + cbrt((-double_q + sqrt(double_delta1))/2.0) - (double_b/3.0*double_a);
		resolue.racine1.imaginaire = cbrt(-sqrt(-double_delta1)/2.0) + cbrt(sqrt(-double_delta1)/2.0);
		double_A = double_a;
		double_B = double_b + double_a*(resolue.racine1.reel + resolue.racine1.imaginaire);
		double_C = double_c + (double_b + double_a*(resolue.racine1.reel + resolue.racine1.imaginaire))*(resolue.racine1.reel + resolue.racine1.imaginaire);
		solPartielle = ResolutionEq2ndDegree(double_A, double_B, double_C);
		resolue.racine2 = solPartielle.racine1;
		resolue.racine3 = solPartielle.racine2;
		return resolue;
	}	
}
