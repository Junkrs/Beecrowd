//Bee 3209 - Electrical Outlets

#include <stdio.h>
int main() {
    int N, i, K, j, O, tomadas;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        tomadas = 0;
        O = 0;
        K = 0;
        scanf("%d", &K);
        for (j = 0; j < K; j++) {
            scanf("%d", &O);
            tomadas += O;
        }
    printf("%d\n", tomadas - (K - 1));
    }
    return 0;
}