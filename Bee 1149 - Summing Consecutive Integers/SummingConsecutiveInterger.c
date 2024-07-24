//Bee 1149 - Summing Consecutive Integers

#include <stdio.h>
int main() {
    int A, N, i, res = 0;
    scanf("%i", &A);
    do {
       scanf("%i", &N); 
    } while (N <= 0);
    for (i = 0; i < N; i++) {
        res += A + i;
    }
    printf("%i\n", res);
    return 0;
}