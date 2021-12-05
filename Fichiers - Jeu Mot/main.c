
/*! Commentaire de fichier (doxygen)
\file main.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 9.0 TP 9
\date 27 Decembre 2019
\brief Programmation Procedural C : TP9
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>	
#include <ctype.h>
#include <time.h>
#define ERREUR_SAISIE -1
#define TAILLE_MAX 1000 // Tableau de taille 1000



/*! Commentaire de la procedure test_scanf (doxygen)
\fn void test_scanf(int int_retour)
\brief procedure qui permet de tester si une lecture est correcte ou non
\param int_retour entier en entree
*/
void test_scanf(int int_retour){
	if (int_retour != 1) {
		printf("Il y a un probleme ! \n");
		exit(ERREUR_SAISIE);
	}
}



/*! Commentaire de la procedure main (doxygen)
\fn int main(int argc, char* argv[])
\brief Fonction main qui permet le choix des differents algorithmes a tester.
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si aucune erreur
*/
int joueLettre(char* pchar_motATrouver, char* pchar_motMystere, char char_Lettre){
	int i;
	int int_compteur;
	int_compteur = 0;
	i = 0;
	while (i < strlen(pchar_motATrouver)-1){
		if ((pchar_motATrouver[i] == char_Lettre) && (pchar_motMystere[i] != pchar_motATrouver[i])){
			printf("\nBon choix !\n");
			pchar_motMystere[i] = pchar_motATrouver[i];
			printf("Voici l'avancement du mot a trouver :%s\n", pchar_motMystere);
			int_compteur++;
		}
		//boucle pour verifier si il y une lettre qui a deja ete verifier et qu'on est a la fin du mot
		//alors on affiche qu'on a deja entree la lettre
		else if ((i == strlen(pchar_motATrouver)-2) && (int_compteur == 0)){
			printf("\nVotre lettre n'a pas ete trouvee dans le mot ou vous avez deja entree cette lettre !\n");
		}
		i++;
	}
	return int_compteur;
}




/*! Commentaire de la procedure main (doxygen)
\fn int main(int argc, char* argv[])
\brief Fonction main qui permet le choix des differents algorithmes a tester.
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si aucune erreur
*/
char demanderLettre(void){
	char char_lettre[1];
	int int_retour;
	printf("Quelle lettre voulez-vous jouer ?\n");
	printf("Entrer votre choix : \n");
	int_retour = scanf("%s", char_lettre);
	test_scanf(int_retour);
  	char_lettre[0] = toupper((int) char_lettre[0]);
	return char_lettre[0];
}




/*! Commentaire de la procedure main (doxygen)
\fn int main(int argc, char* argv[])
\brief Fonction main qui permet le choix des differents algorithmes a tester.
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si aucune erreur
*/
int verifierSiFiniOuNon(char* pchar_motATrouver, char* pchar_motMystere){
	int i;
	int int_compteur;
	i = 0;
	int_compteur = 0;
	while(i < strlen(pchar_motATrouver)-1){
		if (pchar_motATrouver[i] == pchar_motMystere[i]){
			int_compteur++;
		}
		i++;
	}
	if (i == int_compteur){
		return 1;
	}
	else {
		return 0;
	}
}




 /*! Commentaire de la procedure main (doxygen)
\fn int main(int argc, char* argv[])
\brief Fonction main qui permet le choix des differents algorithmes a tester.
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si aucune erreur
*/
void majuscule(char *chaine){
   int i;
   i = 0;
   for(i=0;chaine[i] != '\0';i++){
       chaine[i] = toupper(chaine[i]);
   }
}



int compte(FILE *fichier){
	int c;
	int nLignes = 0;
	int c2 = '\0';
	while((c=fgetc(fichier)) != EOF){
		if(c=='\n'){
			nLignes++;
		}
		c2 = c;
	}
	if(c2 != '\n'){
		nLignes++; 
	}
 	return nLignes;
}
 

char* motAleatoire(char* pchar_nomFichier){
  int int_randomChoix;
  char* pchar_randomChoix;
  int_randomChoix=0;

  int_randomChoix =(rand() % 834);
  printf("\nceci est le nombre random : %d\n", int_randomChoix);
  if (strcmp(pchar_nomFichier, "mots") == 0){
    FILE* fichier_mot = fopen("mots.txt", "r+");
    int caractereLu, ligne=1;
    char* mot;
    mot = malloc(TAILLE_MAX * sizeof(char));
    if (fichier_mot == NULL){
    	exit(0);
    }
    else {
    	rewind(fichier_mot);
    	while (caractereLu!=EOF && ligne < int_randomChoix){
        	caractereLu=fgetc(fichier_mot);
        	if (caractereLu =='\n'){
          		ligne++;
        	}
    	}
    }
    pchar_randomChoix = fgets(mot,1000,fichier_mot);
  }
  return pchar_randomChoix;
}




char* obtenirMotMystere(char* pchar_motAleatoire){
	int i;
	char* pchar_motMystere = (char*)malloc((TAILLE_MAX*sizeof(char)));
	char* pchar_motMystere2 = (char*)malloc((TAILLE_MAX*sizeof(char)));
	i = 0;
	while (i < strlen(pchar_motAleatoire)-1){
		pchar_motMystere[i] = '-';
		i++;
	}
	for (i = 0; i < strlen(pchar_motAleatoire)-1; i++){
		pchar_motMystere2[i] = (char)pchar_motMystere[i];
		printf("%c", (char)pchar_motMystere[i]);
	}
	printf("\n");
	printf("%s\n", pchar_motMystere2);
	return pchar_motMystere;
}



/*! Commentaire de la procedure main (doxygen)
\fn int main(int argc, char* argv[])
\brief Fonction main qui permet le choix des differents algorithmes a tester.
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si aucune erreur
*/
int jouePendu(char* pchar_motATrouver){
	char* pchar_motMystere;
	int int_coupRestant;
	char char_choixLettre;
	int verifFiniOuNon;
	int int_NbLettresTrouvee;
	int_coupRestant = 10;
  	pchar_motMystere = obtenirMotMystere(pchar_motATrouver);
	while (int_coupRestant > 0){
		char_choixLettre = demanderLettre();
		int_NbLettresTrouvee = joueLettre(pchar_motATrouver, pchar_motMystere, char_choixLettre);
		verifFiniOuNon = verifierSiFiniOuNon(pchar_motATrouver, pchar_motMystere);
		//il faut une fonction / procedure qui affiche ce que l'on a reussi a trouver apres avoir jouer une lettre !
		if (int_NbLettresTrouvee == 0){
			int_coupRestant--;
			printf("Il vous reste %d coup(s)\n", int_coupRestant);
		}
		else if (verifFiniOuNon == 1){
			printf("Bravo ! Vous avez trouvee le mot mystere !\n");
			return int_coupRestant;
		}
		else {
			printf("Il vous reste %d coup(s)\n", int_coupRestant);
		}
	}
	return int_coupRestant;
}






//utiliser strcmp pour comparer ? il faut recuperer le tableau associe de scorePendu.txt et
// le mettre a jour au fur des operations faites sur le fichier

void sauvegarderScore(char* pchar_nomFichier, char* pchar_nom, int int_score){
	int i;
   	while (pchar_nomFichier[i] != '\0'){
  		if (strcmp(pchar_nomFichier, pchar_nom) == 0){
  			printf("Vous avez deja jouer auparavant !\n");
  		}
  		else {
  			printf("Vous n'avez jamais joue !\n");
  		}
  		i++;
  	}
 }
  	


/*! Commentaire de la procedure main (doxygen)
\fn int main(int argc, char* argv[])
\brief Fonction main qui permet le choix des differents algorithmes a tester.
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si aucune erreur

//marche pour l'ecriture dans un fichier .txt et pour trouver le nombre de ligne du fichier
int main(int argc, char* argv[]){
	FILE* fichier = fopen("mots.txt", "r+");
	if(fichier != NULL){
		int nLignes = compte(fichier);
 
		printf("Nombre de lignes : %d\n", nLignes);
    fprintf(fichier, "\ncoucou"); //ecrit a la fin du fichier
		fclose(fichier);
	}
	else{
		puts("Erreur en ouverture du fichier.");
  }
	return 0;
}

*/


//marche pour recuperer et stocker les mots de mots.txt dans un tableau !
//utiliser le mode "a" dans fopen pour ajouter du text a partir de la fin d'un fichier
int main(int argc,char* argv []){
  char* pchar_motAleatoire;
  char* pchar_fichier;
  int int_score;
  srand(time(NULL));
  pchar_motAleatoire = (char*)malloc((TAILLE_MAX*sizeof(char)));
  pchar_fichier = "mots";
  pchar_motAleatoire = motAleatoire(pchar_fichier);
  printf("ceci est le mot aleatoire du fichier mots.txt : %s\n", pchar_motAleatoire);
  int_score = jouePendu(pchar_motAleatoire);
  printf(" Le score est : %d\n", int_score);

}
