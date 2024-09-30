//Bee 3339 - Karina

#include <stdio.h>
#include <math.h>
int main() {
    int Q, i, j, raizes, L, R;
    scanf("%d", &Q);
    for (i = 0; i < Q; i++) {
        raizes = 0;
        scanf("%d %d", &L, &R);
        for (j = 0; j < R; j++) {
            if (pow(j, 2) >= L && pow(j, 2) <= R) {
                raizes++;
            } else if (pow(j, 2) >= R) {
                break;
            }
        }
        printf("%d\n", raizes);
    }
    return 0;
}