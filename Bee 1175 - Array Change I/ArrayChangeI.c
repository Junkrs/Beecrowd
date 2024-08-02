//Bee 1175 - Array change I

#include <stdio.h>
int main() {
    int N[20], i, j = 0;
    for (i = 0; i <= 19; i++) {
        scanf("%i", &N[i]);
    }
    for (i = 19; i >= 0; i--) {
        printf("N[%i] = %i\n", j, N[i]);
        j++;
    }
    return 0;
}