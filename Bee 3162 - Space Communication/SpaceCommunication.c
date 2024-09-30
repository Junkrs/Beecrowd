//Bee 3162 - Space Communication

#include <stdio.h>
#include <math.h>
int main() {
    int N, i, x[100], y[100], z[100], j;
    float comparacao[100], proximo;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            comparacao[j] = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2) + pow(z[i] - z[j], 2));
        }
        proximo = 1000;
        for (j = 0; j < N; j++) {
            if (proximo > comparacao[j] && comparacao[j] != 0) {
                proximo = comparacao[j];
            }
        }
        if (proximo <= 20.0) {
            printf("A\n");
        } else if (proximo > 20.0 && proximo <= 50.0) {
            printf("M\n");
        } else if (proximo > 50.0) {
            printf("B\n");
        }
    }
    return 0;
}