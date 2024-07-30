//Bee 1158 - Sum of Consecutive Odd Numbers III

#include <stdio.h>
int main() {
    int N, X, Y, i, j, soma;
    scanf("%i", &N);
    for (i = 1; i <= N; i++) {
        scanf("%i %i", &X, &Y);
        soma = 0;
        if (X % 2 == 1) {
            j = 1;
            do {
                soma += X;
                X += 2;
                j++;
            } while (j <= Y);
            printf("%i\n", soma);
        } else if (X % 2 == 0) {
            X = X + 1;
            j = 1;
            do {
                soma += X;
                X += 2;
                j++;
            } while (j <= Y);
            printf("%i\n", soma);
        }
    }
    return 0;
}