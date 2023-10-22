#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        /*The number of columns in the first matrix
          must be equal to the number of rows in the second matrix.*/
        return 1;
    }

    int first[m][n], second[p][q], result[m][q];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

