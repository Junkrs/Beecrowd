//Bee 1180 - Lowest Number and Position

#include <stdio.h>
int main() {
    int N, i, menor = 0, j;
    scanf("%d", &N);
    int X[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    menor = X[0];
    for (i = 0; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            j = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, j);
    return 0;
}