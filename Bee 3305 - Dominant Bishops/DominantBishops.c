//Bee 3305 - Dominant Bishops

#include <stdio.h>
#include <math.h>
int main() {
    int N, i, x, y, j, dominante, qtdDom = 0;
    scanf("%d", &N);
    int mais[N], menos[N];
    for (i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);
        mais[i] = x + y;
        menos[i] = x - y;
    }
    for (i = 0; i < N; i++) {
        dominante = 1;
        for (j = 0; j < N; j++) {
            if (j != i && (mais[i] == mais[j] || menos[i] == menos[j])) {
                dominante = 0;
            }
        }
        if (dominante == 1) {
            qtdDom++;
        }
    }
    printf("%d\n", qtdDom);
    return 0;
}