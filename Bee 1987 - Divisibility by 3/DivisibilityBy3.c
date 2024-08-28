//Bee 1987 - Divisibility by 3

#include <stdio.h>
int main() {
    int n, m, i, soma, aux;
    while (scanf("%d %d", &n, &m) != EOF) {
        soma = 0;
        aux = m;
        for (i = 0; i < n; i++) {
            soma += aux % 10;
            aux /= 10;
        }
        if (soma % 3 == 0) {
            printf("%d sim\n", soma);
        } else {
            printf("%d nao\n", soma);
        }
    }
    return 0;
}