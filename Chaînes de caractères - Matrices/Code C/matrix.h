#include <stdlib.h>
#include <stdio.h>

float** make_matrix(int n);
float** identity(int n);
void free_matrix(float** matrix, int n);
void read_matrix(float** matrix, int n);
void print_matrix(float** matrix, int n);

float** reduced(float** matrix, int n, int i, int j);;
float determinant(float** matrix, int n);
float** comatrix(float** matrix, int n);
float** transpose(float** matrix, int n);

float** mull(float x, float** matrix, int n);

void dilatation(float k, int i, float** matrix, int n);
void transvection(float k, int i, int j, float** matrix, int n);