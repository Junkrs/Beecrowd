//Bee 3046 - Domino

#include <stdio.h>
int main () {
    int N, res;
    scanf("%d", &N);
    res = ((N + 1) * (N + 2)) / 2;
    printf("%d\n", res);
    return 0;
}