//Bee 1144 - Logical Sequence

#include <stdio.h>
int main() {
    int N, i = 1;
    scanf("%i", &N);
    do {
        printf("%i %i %i\n%i %i %i\n", i, (i * i), (i * i * i), i, (i * i) + 1, (i * i * i) + 1);
        i++;
    } while (i <= N);
    return 0;
}