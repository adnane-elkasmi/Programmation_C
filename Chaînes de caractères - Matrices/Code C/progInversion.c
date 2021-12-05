/*! Commentaire de fichier (doxygen)
\file main.c
\author Adnane EL KASMI <elkasmiadn@eisti.eu>
\version 0.7 TP 7
\date 03 Decembre 2019
\brief ProgC TP7 
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
\version 0.7 TP7
\date 03 Decembre 2019
\brief ProgC TP7
\param argc nombre d'arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passe
*/



/* Inclusion des entetes de librairies */
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "matrix.h"

#define TRUE 1
#define FALSE 0

float** inverse_determinant(float** matrix, int size) {
    float det = determinant(matrix, size);
    float** com = comatrix(matrix, size);
    float** tcom = transpose(com, size);
    float** inverse = mull(1.0/det, tcom, size);

    free_matrix(com, size);
    free_matrix(tcom, size);

    return inverse;
}

float** inverse_gauss(float** matrix, int size) {
    float** inverse = identity(size);
    float k;

    for (int i = 0; i < size; i++) {
        if (matrix[i][i] == 0) {
            for (int j = i+1; j < size; j++) {
                if (matrix[i][j] != 0) {
                    transvection(1, i, j, matrix, size);
                    transvection(1, i, j, inverse, size);
                    break;
                }
            }

        }

        k = 1/matrix[i][i];
        dilatation(k, i, matrix, size);
        dilatation(k, i, inverse, size);

        for(int j = i + 1; j < size; j++) {
            k = -matrix[j][i];
            transvection(k, j, i, matrix, size);
            transvection(k, j, i, inverse, size);
        }   
    }

    for (int i = size - 1; i >= 0; i--) {
        for(int j = i - 1; j >= 0; j--) {
            k = -matrix[j][i];
            transvection(k, j, i, matrix, size);
            transvection(k, j, i, inverse, size);
        }
    }

    return inverse;
}

int main(int argc, char** argv) {
    int with_determinant = FALSE;
    int with_gauss = FALSE;
    int next_size = FALSE;
    int size = -1;

    for (int i = 1; i < argc; i++) {
        if (next_size) {
            errno = 0;
            size = strtol(argv[i], NULL, 10);
            if ((errno == ERANGE && (size == LONG_MAX || size == LONG_MIN))
                   || (errno != 0 && size == 0)) { // from strtol man page
               perror("strtol");
               exit(EXIT_FAILURE);
           }
           next_size = FALSE;
        }
        
        if (strcmp(argv[i], "-n") == 0) {
            next_size = TRUE;
        } else if (strcmp(argv[i], "determinant") == 0) {
            with_determinant = TRUE;
        } else if (strcmp(argv[i], "gauss") == 0) {
            with_gauss = TRUE;
        }
    }

    if (size < -1 || (!with_determinant && !with_gauss)) {
        printf("missing arguments\n");
        exit(EXIT_FAILURE);
    }
    

    float** matrix = make_matrix(size);
    read_matrix(matrix, size);

    printf("\nLa matrice à inverser est: \n");
    print_matrix(matrix, size);

    if (with_determinant) {
        printf("\nEn utilisant la méthode du determinant...\n");
        float** inverse = inverse_determinant(matrix, size);
        printf("\nL'inverse de cette matrice est :\n");
        print_matrix(inverse, size);

        free_matrix(inverse, size);
    }

    if (with_gauss) {
        printf("\nEn utilisant la méthode de Gauss...\n");
        float** inverse = inverse_gauss(matrix, size);
        printf("\nL'inverse de cette matrice est :\n");
        print_matrix(inverse, size);

        free_matrix(inverse, size);
    }


    free_matrix(matrix, size);

    return EXIT_SUCCESS;
}
