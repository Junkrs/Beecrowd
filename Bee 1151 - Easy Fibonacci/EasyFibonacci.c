//Bee 1151 - Easy Fibonacci

#include <stdio.h>
int main() {
    int N, i, fib1 = 0, fib2 = 1, fib3 = 0;
    scanf("%i", &N);
    for (i = 1; i < N; i++) {
        if (i % 2 == 1) {
            printf("%i ", fib3);
            fib3 = fib1 + fib2;
            fib1 = fib3;
        } else if (i == 2) {
            printf("%i ", fib3);
        } else if (i % 2 == 0) {
            printf("%i ", fib3);
            fib3 = fib1 + fib2;
            fib2 = fib3;
        }
    }
    printf("%i\n", fib3);
    return 0;
}