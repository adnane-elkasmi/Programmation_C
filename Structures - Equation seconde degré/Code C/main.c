/*! Commentaire de fichier (doxygen)
\file main.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 8.0 TP8
\date 19 Decembre 2019
\brief Programmation Procedural C : TP8
*/



#include "fonctions.h"



/*! Commentaire de la procedure main (doxygen)
\fn int main(int argc, char** argv)
\brief Fonction main qui permet le choix des differents algorithmes a tester.
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si aucune erreur
*/
int main(int argc, char* argv[]){
	double double_a;
	double double_b;
	double double_c;
	double double_d;
	int int_compteur;
	double double_origin;
	solutionEqu2D resultatEq2nd;
	solutionEqu3D resultatEq3eme;
	int_compteur = 0;
	if (argc == 5){
		if(sscanf(argv[1], "%lf", &double_origin) == 1){
			double_a = strtof(argv[1], NULL);
			int_compteur++;
		}
		else {
			printf("ERREUR DE SAISIE ! -> SORTIE DU PROGRAMME !\n");
			exit(ERREUR_SAISIE);
		}
		if(sscanf(argv[2], "%lf", &double_origin) == 1){
			double_b = strtof(argv[2], NULL);
			int_compteur++;
		}
		else {
			printf("ERREUR DE SAISIE ! -> SORTIE DU PROGRAMME !\n");
			exit(ERREUR_SAISIE);
		}
		if(sscanf(argv[3], "%lf", &double_origin) == 1){
			double_c = strtof(argv[3], NULL);
			int_compteur++;
		}
		else {
			printf("ERREUR DE SAISIE ! -> SORTIE DU PROGRAMME !\n");
			exit(ERREUR_SAISIE);
		}
		if(sscanf(argv[4], "%lf", &double_origin) == 1){
			double_d = strtof(argv[4], NULL);
			int_compteur++;
		}
		else {
			printf("ERREUR DE SAISIE ! -> SORTIE DU PROGRAMME !\n");
			exit(ERREUR_SAISIE);
		}
		if (int_compteur == 4 && double_a != 0){
			printf("\n Vous avez choisi de resoudre une equation du 3eme degree dans C.\n");
			resultatEq3eme = ResolutionEq3emeDegree(double_a, double_b, double_c, double_d);
			printf("Resolution de l'equation du troisieme degree de %lf X^3 %lf X^2 + %lf X + %lf = 0\n\n", double_a, double_b, double_c, double_d);
   			printf("\n\n L'equation possede %d solution(s) : \n\n", resultatEq3eme.nbRacines);
   			if (resultatEq3eme.nbRacines == 1){
   				printf("La solution triple est : %lf + i %0.4f \n", resultatEq3eme.racine1.reel, resultatEq3eme.racine1.imaginaire);	
   			}
   			else if (resultatEq3eme.nbRacines == 2){
   				printf("La premiere solution est : %lf + i %0.4f \n", resultatEq3eme.racine1.reel, resultatEq3eme.racine1.imaginaire);
				printf("La deuxieme solution est : %lf + i %lf \n", resultatEq3eme.racine2.reel, resultatEq3eme.racine2.imaginaire);
   			}
   			else {
				printf("La premiere  solution est : %lf + i %0.4f \n", resultatEq3eme.racine1.reel, resultatEq3eme.racine1.imaginaire);
				printf("La deuxieme  solution est : %lf + i %lf \n", resultatEq3eme.racine2.reel, resultatEq3eme.racine2.imaginaire);
				printf("La troisieme solution est : %lf + i %lf \n", resultatEq3eme.racine3.reel, resultatEq3eme.racine3.imaginaire);
			}
		}
		else if (int_compteur == 4 && double_a == 0){
			printf("\n Vous avez choisi de resoudre une equation du 2eme degree dans C.\n");
			printf("Resolution de l'equation du second degree de %lf X^2 %lf X + %lf = 0\n\n", double_b, double_c, double_d);
			resultatEq2nd = ResolutionEq2ndDegree(double_b, double_c, double_d);
   			printf("\n L'equation possede %d solution(s) : \n\n",resultatEq2nd.nbRacines);
   			if (resultatEq2nd.nbRacines == 1){
   				printf("La solution double : %lf + i %lf \n", resultatEq2nd.racine1.reel, resultatEq2nd.racine1.imaginaire);
   			}
   			else {
				printf("La premiere solution est : %lf + i %lf \n", resultatEq2nd.racine1.reel, resultatEq2nd.racine1.imaginaire);
				printf("La deuxieme solution est : %lf + i %lf \n", resultatEq2nd.racine2.reel, resultatEq2nd.racine2.imaginaire);
			}
		}
		else {
			printf("Il y a une erreur ! \n");
			exit(ERREUR_SAISIE);
		}
	}
	else if (argc == 4){
		if(sscanf(argv[1], "%lf", &double_origin) == 1){
			double_a = strtof(argv[1], NULL);
			int_compteur++;
		}
		else {
			printf("ERREUR DE SAISIE ! -> SORTIE DU PROGRAMME !\n");
			exit(ERREUR_SAISIE);
		}
		if(sscanf(argv[2], "%lf", &double_origin) == 1){
			double_b = strtof(argv[2], NULL);
			int_compteur++;
		}
		else {
			printf("ERREUR DE SAISIE ! -> SORTIE DU PROGRAMME !\n");
			exit(ERREUR_SAISIE);
		}
		if(sscanf(argv[3], "%lf", &double_origin) == 1){
			double_c = strtof(argv[3], NULL);
			int_compteur++;
		}
		else {
			printf("ERREUR DE SAISIE ! -> SORTIE DU PROGRAMME !\n");
			exit(ERREUR_SAISIE);
		}
		if (int_compteur == 3){
			printf("\nVous avez choisi de resoudre une equation du 2eme degree dans C.\n");
			printf("Resolution de l'equation du second degree de %lf X^2 %lf X + %lf = 0 \n\n", double_a, double_b, double_c);
			resultatEq2nd = ResolutionEq2ndDegree(double_a, double_b, double_c);
   			printf("\n L'equation possede %d solution(s) : \n\n",resultatEq2nd.nbRacines);
   			if (resultatEq2nd.nbRacines == 1){
   				printf("La solution double est : %lf + i %lf \n", resultatEq2nd.racine1.reel, resultatEq2nd.racine1.imaginaire);
   			}
   			else {
				printf("La premiere solution est : %lf + i %lf \n", resultatEq2nd.racine1.reel, resultatEq2nd.racine1.imaginaire);
				printf("la deuxieme solution est : %lf + i %lf \n", resultatEq2nd.racine2.reel, resultatEq2nd.racine2.imaginaire);
			}
		}
		else {
			printf("ERREUR : PAS ASSEZ D'ARGUMENTS ! -> SORTIE DU PROGRAMME ! \n");
			exit(ERREUR_SAISIE);
		}
	}
	else {
			printf("ERREUR : PAS ASSEZ D'ARGUMENTS ! -> SORTIE DU PROGRAMME ! \n");
			exit(ERREUR_SAISIE);
	}
	return (0);
}
