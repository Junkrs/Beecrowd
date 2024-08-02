//Bee 1177 - Array Fill II

#include <stdio.h>
int main() {
    int T, N[1000], i, j;
    scanf("%d", &T);
    for (i = 0; i < 1000; i++) {
        if (j >= T) {
            j = 0;
        }
        printf("N[%d] = %d\n", i, j);
        j++;
    }
    return 0;
}