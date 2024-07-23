//Bee 1146 - Growing Sequences

#include <stdio.h>
int main() {
    int N, i;
    do {
        scanf("%i", &N);
        for (i = 1; i < N; i++) {
            printf("%i ", i);
        }
        if (N == 0) {
            break;
        } else {
            printf("%i\n", i);
        }    
    } while (N != 0);
    return 0;
}