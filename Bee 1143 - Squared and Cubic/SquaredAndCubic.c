//Bee 1143 - Squared and Cubic

#include <stdio.h>
int main() {
    int N, i = 1;
    scanf("%i", &N);
    do {
        printf("%i %i %i\n", i, (i * i), (i * i * i));
        i++;
    } while (i <= N);
    return 0;
}