//Bee 1173 - Array Fill I

#include <stdio.h>
int main() {
    int N[10], i = 0, V, j;
    scanf("%i", &V);
    printf("N[0] = %i\n", V);
    for (i = 1; i < 10; i++) {
        N[i] = V;
        printf("N[%i] = %i\n", i, V *= 2);
    }
    return 0;
}