/* Inclusion des entetes de librairies */
#include "fonctions.h"

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


double rand_0_1(void)
{
	return rand()/(double) RAND_MAX;
}


int Monte_Carlo(int n){ //méthode de Monte-Carlo
	
unsigned int compteur=0; // le compteur de flechettes dans la cible
unsigned int i=0; // le compteur de boucle
double x,y;
double pi;

	
printf("Simulation en cours, cela peut prendre quelques minutes ... \n");
for(i=0 ; i< n; i++){
	
		// Jet de la flechette
		x = rand_0_1();
		y = rand_0_1();
		
		// La flechette est-elle dans le disque ?
		if( (x*x + y*y) <= 1 ){
			compteur++;
		}
}
	
pi = compteur*4 / (double) n; // "(double)" permet de convertir n d'un entier vers un double ; Ici nous avons un quart de disque ( multiplier par 4).
                             // si il n'y est pas, c'est la division entière qui est effectuée (le résultat est un entier)
printf("La simulation donne pour valeur de pi : %lf.\n",pi);
printf("\n");
return 0;
}


int Madhava_de_Sangamagrama(int n){

int k;
float pi;

pi=0;

for (k=0;k<=n;k++){
	pi=(pi+4*(pow(-1,k)/(2*k+1)));
    }
printf("L'approximation de pi par la methode de Madhava de Sangamagrama est : %f\n",pi);
printf("\n");
return 0;
}


int John_Wallis(int n){
	
int k;
float demipi;
float pi;

demipi=1;
pi=0;

for (k=1;k<=n;k++){
	demipi=(demipi*(pow(2*k,2)/(pow(2*k,2)-1)));
    }
pi=(2*demipi);    
printf("L'approximation de pi par la methode de John Wallis est : %f\n",pi);
printf("\n");
return 0;	
}

float Isaac_Newton(int n){
	if (n==0){
		return 1;
	} else {
		    return(	(Isaac_Newton(n-1)/2)+(1/(Isaac_Newton(n-1))) );
		   }	 	
}

float Edmund_Halley(int n){
	if (n==0){
		return 1;
	} else {
		    return(	(Edmund_Halley(n-1)*(((pow(Edmund_Halley(n-1),2)+6)/(3*pow(Edmund_Halley(n-1),2)+2)))) );        
		   }	 	
}	

float suiteP(int n){
	if (n==0) {
		return 1;
	} else { 
		    return(suiteP(n-1)+2*suiteQ(n-1));
	}	
}

float suiteQ(int n){
	if (n==0) {
		return 2;
	} else { 
		    return(suiteQ(n-1)+suiteP(n-1));
	}	
}


int Theon_de_Smyrne(int n){
float racine2;
racine2=(suiteP(n)/suiteQ(n));
printf("L'approximation de racine carre de 2 par la methode de Theon de Smyrne est : %f\n",racine2);
printf("\n");
return 0;
}
