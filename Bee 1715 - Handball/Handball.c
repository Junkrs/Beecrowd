//Bee 1715 - Handball

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, M, i, j, feitos = 0, aux, numero[100];;
    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &numero[j]);
            if (numero[j] == 0) {
                numero[j] = 1;
            } else {
                numero[j] = 0;
            }
            aux += numero[j];
        }
        if (aux == 0) {
            feitos++;
        }
        aux = 0;
    }
    printf("%d\n", feitos);
    return 0;
}