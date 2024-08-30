//Bee 1533 - Detective Watson

#include <stdio.h>
int main() {
    int N, i, maior, correto, maiorSus;
    do {
        correto = 0;
        scanf("%d", &N);
        if (N != 0) {
           int grau[1000];
            for (i = 0; i < N; i++) {
                scanf("%d", &grau[i]);
            }
            maiorSus = 0;
            maior = grau[0];
            for (i = 1; i < N; i++) {
                if (grau[i] > maior) {
                    maior = grau[i];
                    maiorSus = i;
                }
            }
            grau[maiorSus] = -1;
            maiorSus = 1;
            maior = grau[0];
            for (i = 1; i < N; i++) {
                if (grau[i] > maior) {
                    maior = grau[i];
                    maiorSus = i + 1;
                }
            }
            printf("%d\n", maiorSus); 
        }
    } while (N != 0);
    return 0;
}