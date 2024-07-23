//Bee 1101 - Sequence of Numbers and Sum

#include <stdio.h>
int main() {
    int M, N, i, soma;
    do {
        scanf("%i %i", &M, &N);
        soma = 0;
        if (M > N && M > 0 && N > 0) {
            for (i = N; i <= M; i++) {
                printf("%i ", i);
                soma += i;
            }
            printf("Sum=%i\n", soma);
        } else if (N > M && M > 0 && N > 0) {
           for (i = M; i <= N; i++) {
                printf("%i ", i);
                soma += i;
            }
            printf("Sum=%i\n", soma);
        }
    } while (M > 0 && N > 0);
    return 0;
}