#include "matrix.h"

float** make_matrix(int n) {
    float** matrix = malloc(n * sizeof(float*));
    
    for(int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(float));

        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }   
    }   

    return matrix;
}

float** identity(int n) {
    float** id = make_matrix(n);

    for(int i = 0; i < n; i++) {
        id[i][i] = 1.0; 
    } 

    return id;
}

void free_matrix(float** matrix, int n) {
    for(int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void read_matrix(float** matrix, int n) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
}

void print_matrix(float** matrix, int n) {
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("[ ");
        for (int j = 0; j < n; j++) {
            printf("%6.2f ", matrix[i][j]);
            
        }
        printf(" ]\n");
    }
     printf("\n");
    
}


float** reduced(float** matrix, int n, int x, int y) {
    int m = n - 1;
    float** new = make_matrix(m);
    
    for(int i = 0; i < m; i++) {
        int u = i;
        if (u >= x) {
            u++;
        }

        for(int j = 0; j < m; j++) {
            int v = j;
            if (v >= y) {
                v++;
            }
            new[i][j] = matrix[u][v];
        } 
    }
    return new;
}

float determinant(float** matrix, int n) {
    if (n == 1) {
        return matrix[0][0];
    }

    float det = 0;
    int i = 0;
    for (int j = 0; j < n; j++) {
        int sign = (i + j) % 2 == 0 ? 1 : -1;

        float** r = reduced(matrix, n, i, j);
        det += matrix[i][j] *  sign * determinant(r, n - 1);
        free_matrix(r, n - 1);
    }
    return det;
}

float** comatrix(float** matrix, int n) {
    float** com = make_matrix(n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sign = (i + j) % 2 == 0 ? 1 : -1;

            float** r = reduced(matrix, n, i, j);
            com[i][j] = sign * determinant(r, n - 1);
            free_matrix(r, n - 1);
        }
    }
    return com;
}

float** transpose(float** matrix, int n) {
    float** t = make_matrix(n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[i][j] = matrix[j][i];
        }
    }
    return t;
}

float** mull(float x, float** matrix, int n) {
    float** res = make_matrix(n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = x * matrix[i][j];
        }
    }
    return res;
}

void dilatation(float k, int i, float** matrix, int n) {
    for (int j = 0; j < n; j++) {
        matrix[i][j] = k * matrix[i][j];
    }
}

void transvection(float k, int i, int j, float** matrix, int n) {
    for (int u = 0; u < n; u++) {
        matrix[i][u] = matrix[i][u] + k * matrix[j][u];
    }
}
