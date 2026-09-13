#include <stdio.h>

// Function to take input for a matrix
void readMatrix(int r, int c, int mat[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int r, int c, int mat[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
}

// Function for Matrix Addition
void addMatrices(int r, int c, int a[r][c], int b[r][c], int result[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function for Matrix Multiplication
void multiplyMatrices(int r1, int c1, int a[r1][c1], int r2, int c2, int b[r2][c2], int result[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Function for Matrix Transpose
void transposeMatrix(int r, int c, int mat[r][c], int result[c][r]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

int main() {
    int r = 2, c = 2; // Default 2x2 matrices for simplicity
    int a[2][2], b[2][2], res[2][2];

    printf("Enter elements for Matrix A (2x2):\n");
    readMatrix(r, c, a);

    printf("Enter elements for Matrix B (2x2):\n");
    readMatrix(r, c, b);

    printf("\n--- Matrix Addition (A + B) ---\n");
    addMatrices(r, c, a, b, res);
    printMatrix(r, c, res);

    printf("\n--- Matrix Multiplication (A * B) ---\n");
    multiplyMatrices(r, c, a, r, c, b, res);
    printMatrix(r, c, res);

    printf("\n--- Transpose of Matrix A ---\n");
    transposeMatrix(r, c, a, res);
    printMatrix(c, r, res);

    return 0;
}