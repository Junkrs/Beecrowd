//Bee 2552 - CheeseBreadSweeper

#include <stdio.h>
int main () {
    int N, M, i, j, cont = 0;
    while (scanf("%d %d", &N, &M) != EOF) {
        int matriz[100][100], matrizResultante[100][100];
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                if (matriz[i][j] == 1) {
                    printf("9");
                } else {
                    cont = 0;
                    if (i) {
                        cont += matriz[i - 1][j];
                    }
                    if (j) {
                        cont += matriz[i][j - 1];
                    }
                    if (i != N - 1) {
                        cont += matriz[i + 1][j];
                    }
                    if (j != M - 1) {
                        cont += matriz[i][j + 1];
                    }
                    printf("%d", cont);
                }
            }
            printf("\n");
        }
    } 
    return 0;
}