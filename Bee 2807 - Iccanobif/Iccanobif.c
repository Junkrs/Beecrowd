//Bee 2807 - Iccanobif

#include <stdio.h>
int main () {
    int N, i, fib[40]; 
    fib[0] = 1;
    fib[1] = 1;
    scanf("%d", &N);
    for (i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (i = N - 1; i >= 1; i--) {
        printf("%d ", fib[i]);
    }
    printf("1\n");
    return 0;
}