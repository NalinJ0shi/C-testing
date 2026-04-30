#include <stdio.h>

int main(void)
{
    int N;

    printf("Enter dimension N: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 1;
    }

    int a[N][N];
    int b[N][N];
    int c[N][N];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            c[i][j] = 0;
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
