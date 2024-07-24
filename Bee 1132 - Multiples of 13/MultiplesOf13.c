//Bee 1132 - Multiples of 13

#include <stdio.h>
int main() {
    int X, Y, i, soma = 0;
    scanf("%i %i", &X, &Y);
    if (X > Y) {
        for (i = Y; i <= X; i++) {
            if (i % 13 != 0) {
                soma += i;
            }
        }
        printf("%i\n", soma);
    } else if (X < Y) {
        for (i = X; i <= Y; i++) {
            if (i % 13 != 0) {
                soma += i;
            }
        }
        printf("%i\n", soma);
    } else {
        soma = 0;
        printf("%i\n", soma);
    }
    return 0;
}