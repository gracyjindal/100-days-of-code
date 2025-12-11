#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols], C[rows][cols];

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
