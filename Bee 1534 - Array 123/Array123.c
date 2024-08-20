//Bee 1534 - Array 123

#include <stdio.h>
int main () {
    int N, i, j, x = 0;
    while (scanf("%d", &N) != EOF) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (i + j == N - 1) {
                    printf("2");
                    x++;
                } else if (i == j) {
                    printf("1");
                    x++;
                } else {
                    printf("3");
                    x++;
                }
                if (x == N) {
                    printf("\n");
                    x = 0;
                }
            }
        }
    }
    return 0;
}