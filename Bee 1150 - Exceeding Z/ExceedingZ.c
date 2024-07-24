//Bee 1150 - Exceeding Z

#include <stdio.h>
int main() {
    int X, Z, i, j = 0, valor = 0;
    scanf("%i", &X);
    do {
        scanf("%i", &Z);
    } while (Z <= X);
    for (i = X; j <= Z; i++) {
        j += i;
        valor++;
    }
    printf("%i\n", valor);
    return 0;
}