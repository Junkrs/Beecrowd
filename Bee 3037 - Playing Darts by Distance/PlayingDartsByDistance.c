//Bee 3037 - Playing Darts by Distance

#include <stdio.h>
int main() {
    int N, i, x, d, cont = 0, joao = 0, maria = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        joao = 0;
        while (cont < 3) {
            scanf("%d %d", &x, &d);
            joao += (x * d);
            cont++;
        }
        cont = 0;
        maria = 0;
        while (cont < 3) {
            scanf("%d %d", &x, &d);
            maria += (x * d);
            cont++;
        }
        cont = 0;
        if (joao > maria) {
            printf("JOAO\n");
        } else {
            printf("MARIA\n");
        }
    }
    return 0;
}