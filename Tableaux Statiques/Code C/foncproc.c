/*! Commentaire de fichier (doxygen)
\file foncproc.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 5.0 TP 5
\date 18 Novembre 2019
\brief Programmation Procedural C : TP5, fichier header contenant les prototypes des fonctions / procedures.
*/



/* Inclusion des entetes de librairies */
#include "foncproc.h"


int saisieEntier(void) {
	
 /* Déclarations */	
int n;        /* nombre entier  */
int n_retour; /* retour nombre entier  */

n_retour = scanf("%d",&n);

/* test de la lecture */
if ( n_retour == 0 || n<0 ) {
	printf("ATTENTION !! Saisie incorrecte");
	exit(ERREUR_SAISIE);
   } else {
	       return n;
	      }
}


void randTablau(int tint_tab[N], int max) {
    for (int i = 0; i < N; i++) {
        tint_tab[i] = rand() % max;
    }
}


void afficherTableau(int tint_tab[N]) {

int i;
printf("[");
for (i=0;i<N;i++) {
	 printf(" %d",tint_tab[i]);	
     }
printf(" ]");
}

void afficherTableauM(int tint_tab[M]) {

int i;
printf("[");
for (i=0;i<M;i++) {
	 printf(" %d",tint_tab[i]);	
     }
printf(" ]");
}

void inversion(int tint_tab[N]) {

int i;
int tmp;

for (i=0;i<(N/2);i++) {
	 tmp=tint_tab[i];
	 tint_tab[i]=tint_tab[N-1-i];
	 tint_tab[N-1-i]=tmp;	
     }
}  

void somme(int tint_tab1[N],int tint_tab2[N]) {
	
int tint_resultat[N];
int i;
randTablau(tint_resultat, N);

	
for (i=0;i<N;i++) {
	 tint_resultat[i]=(tint_tab1[i]+tint_tab2[i]);	
     }	
afficherTableau(tint_resultat);     
}
	
int produitscalaire(int tint_tab1[N],int tint_tab2[N]) {
	
int tint_tab3[N];
int resultat;
int i;

randTablau(tint_tab3, N);
resultat=0;	

for (i=0;i<N;i++) {
	 tint_tab3[i]=(tint_tab1[i]*tint_tab2[i]);	
	 resultat = resultat + tint_tab3[i];
     }	
printf("Le produit scalaire des deux vecteurs est : %d\n",resultat);     
return 0;     
}	
	
void produitvectoriel(int tint_tab1[M],int tint_tab2[M]) {
	
int tint_tab3[M];


tint_tab3[0] =( tint_tab1[1]*tint_tab2[2] - tint_tab1[2]*tint_tab2[1] );
tint_tab3[1] =( tint_tab1[0]*tint_tab2[2] - tint_tab1[2]*tint_tab2[0] );
tint_tab3[2] =( tint_tab1[0]*tint_tab2[1] - tint_tab1[1]*tint_tab2[0] );

printf("Le produit vectoriel des deux vecteurs est : ");

afficherTableauM(tint_tab3);
   
}	  

void init(int tint_plateau[M][M]){

int i;
int j;	
	
for (i=0;i<M;i++) {
	for (j=0;j<M;j++) {
		tint_plateau[i][j]=-1;
	    }
	}
}	

void affichage(int tint_plateau[M][M]){
	
char char_plateau[M][M];
int i;
int j;	

	
for (i=0;i<M;i++) {
	for (j=0;j<M;j++) {
		 if (tint_plateau[i][j]==-1) {
			 char_plateau[i][j]=' ';
		 } 
		 else if (tint_plateau[i][j]==1) {
			 char_plateau[i][j]='X';	
	    }
	     else if (tint_plateau[i][j]==2) {
			 char_plateau[i][j]='O';
		}	 	
	}
}
printf("\n");	
printf("x/y  (0) (1) (2)\n"); 
printf("\n"); 
printf("     -----------\n");
printf("(0) | %c | %c | %c |\n",char_plateau[0][0],char_plateau[0][1],char_plateau[0][2]);
printf("     -----------\n");
printf("(1) | %c | %c | %c |\n",char_plateau[1][0],char_plateau[1][1],char_plateau[1][2]);
printf("     -----------\n");
printf("(2) | %c | %c | %c |\n",char_plateau[2][0],char_plateau[2][1],char_plateau[2][2]);
printf("     -----------\n");
printf("\n");	
	
}	
	
int jouer(int tint_plateau[M][M], int int_joueur, int int_x, int int_y) {
    if (int_x < 0 || int_x >= M || int_y < 0 || int_y >= M) {
        printf("Saisie invalide\n");
        return 0;
    } else if (tint_plateau[int_x][int_y] == 1 || tint_plateau[int_x][int_y] == 2 ) {
        printf("Cette place est deja prise !\n");
        return 0;
    } else if (int_joueur != 1 && int_joueur != 2) {
        printf("Joueur invalide\n");
        return 0;
    } else {
        tint_plateau[int_x][int_y] = int_joueur;
        return 1;
    }
}	
	
int aGane(int tint_plateau[M][M]){
	
int int_case;
int i;	
int j;	

if ( tint_plateau[0][0] == 	tint_plateau[1][1] && tint_plateau[1][1] == tint_plateau[2][2] ) {
	return tint_plateau[0][0];
} else if ( tint_plateau[0][2] == 	tint_plateau[1][1] && tint_plateau[1][1] == tint_plateau[2][0] ) {
	return tint_plateau[0][2];
} else if ( tint_plateau[0][0] == 	tint_plateau[0][1] && tint_plateau[0][1] == tint_plateau[0][2] ) {
	return tint_plateau[0][0];	
} else if ( tint_plateau[1][0] == 	tint_plateau[1][1] && tint_plateau[1][1] == tint_plateau[1][2] ) {
	return tint_plateau[1][0];		
} else if ( tint_plateau[2][0] == 	tint_plateau[2][1] && tint_plateau[2][1] == tint_plateau[2][2] ) {
	return tint_plateau[2][0];		
} else if ( tint_plateau[0][0] == 	tint_plateau[1][0] && tint_plateau[1][0] == tint_plateau[2][0] ) {
	return tint_plateau[0][0];		
} else if ( tint_plateau[0][1] == 	tint_plateau[1][1] && tint_plateau[1][1] == tint_plateau[2][1] ) {
	return tint_plateau[0][1];		
} else if ( tint_plateau[0][2] == 	tint_plateau[1][2] && tint_plateau[1][2] == tint_plateau[2][2] ) {
	return tint_plateau[0][2];		
        } 

int_case = 0;        

for(j = 0; j< M; j++) {
    for(i = 0; i < M; i++) {
       if (tint_plateau[i][j] == 1 || tint_plateau[i][j] == 2 ) {
                int_case++;
            }
        }
    }        

if (int_case == 9) {
        return 0;
    } else {
        return -1;
    }	
	
}

void tourDeJeu(int tint_plateau[M][M]){

int int_tourJoueur = -1;
int int_gagant;
char valeur;




do { affichage(tint_plateau);
	 int_tourJoueur = (int_tourJoueur + 1) % 2;
     int int_x, int_y;
     do { printf("\n"); 
		  if (int_tourJoueur == 0){
	         valeur='X';
          }else if (int_tourJoueur == 1){
	               valeur='O';
	      }
		  printf("C'est le tour du joueur %d [%c]:\n", int_tourJoueur + 1,valeur);
          printf("veiller saisir x = ");
          int_x = saisieEntier();
          printf("veiller saisir y = ");
          int_y = saisieEntier();
          printf("\n");
         } while(jouer(tint_plateau, int_tourJoueur + 1, int_x, int_y)==0 );    	 
	  } while(aGane(tint_plateau) == -1);
	  
affichage(tint_plateau);

int_gagant = aGane(tint_plateau);
    if (int_gagant == 0) {
        printf("Oups ! Egalite :(\n");
    } else if ( int_gagant == 1 || int_gagant == 2) {
        printf("Supeer ! Le joueur %d gagne :D\n", int_gagant);
    }	

}
