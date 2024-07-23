//Bee 1099 - Sum of Consecutive Odd Numbers II

#include <stdio.h>
int main() {
    int N, X, Y, i, j, soma = 0;
    scanf("%i", &N);
    for (i = 1; i <= N; i++) {
        scanf("%i %i", &X, &Y);
        soma = 0;
        if (X == Y) {
            soma = 0;
        } else if (X > Y) {
            for (j = Y + 1; j < X; j++) {
                if (j % 2 == 1) {
                    soma += j;
                }
            }
        } else {
            for (j = X + 1; j < Y; j++) {
                if (j % 2 == 1) {
                    soma += j;
                }
            }
        }
        printf("%i\n", soma);
    }
    return 0;
}