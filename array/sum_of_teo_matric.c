// 
#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    // Input for the first matrix
    printf("Enter the first matrix :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the value of [%d %d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter the second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the value of [%d %d]: ",i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j]; //formula for sum
        }
    }
    printf("%d ", sum[i][j]);

    // Printing the resultant sum matrix
    printf("The sum of the matrices is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}