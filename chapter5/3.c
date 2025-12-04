// WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.

#include <stdio.h>

int main() {
    int m, n, p, q;

    // Read dimensions of matrix A
    printf("Enter number of rows and columns for matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // Read dimensions of matrix B
    printf("Enter number of rows and columns for matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility for multiplication
    if (n != p) {
        printf("Matrix multiplication not possible. Number of columns in A must be equal to number of rows in B.\n");
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];

    // Read matrix A
    printf("Enter elements of matrix A (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read matrix B
    printf("Enter elements of matrix B (%dx%d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize resultant matrix C to zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("Matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");              
    }

    // Print resultant matrix C
    printf("Resultant Matrix C (A x B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);     
        }
        printf("\n");
    }       
    return 0;
}
