//Bee 1176 - Fibonacci Array

#include <stdio.h>
int main() {
    int T, j = 1, i = 0;
    long long int N, fib[60];
    fib[0] = 0;
    fib[1] = 1;
    scanf("%i", &T);
    do {
        scanf("%lld", &N);
        for (i = 2; i <= N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("Fib(%lld) = %lld\n", N, fib[N]);
        j++;
    } while (j <= T);
    return 0;
}