#include <stdio.h>

void mul(const int A[3][3], const int B[3][3], int C[3][3])
{
    int i, j, k;
    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main(void)
{
    int i, j;
    int x[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int y[3][3] = { {1, 4, 7}, {2, 5, 8}, {3, 6, 9} };
    int z[3][3];
    
    mul(x, y, z);
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%3d", z[i][j]);
        putchar('\n');
    }
    
    return (0);
}