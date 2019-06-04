#include <stdio.h>

int main(void){

    int i, j, k, term;

    int a[3][3], b[3][3], c[3][3];

    printf("1つ目の行列を入力してください\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        printf("A[%d][%d]= ", i+1, j+1);
        scanf("%d", &a[i][j]);
        }
    }

    printf("2つ目の行列を入力してください\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("B[%d][%d]= ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] * b[i][j];

            for (i=0; i<3; i++){
                for(j=0; j<3; j++){
                    term = 0;
                    for(k=0; k<3; k++)
                        term = term + a[i][k]*b[k][j];
                    c[i][j] = term;
                }
            }
        }
    }
    printf("行列　C=A×B\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("C[%d][%d] = %d\n", i+1, j+1, c[i][j]);
        }
    }

    return 0;
    
}