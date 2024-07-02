//Bee 1153 - Simple Factorial

#include <stdio.h>
int main() {
    int N, i = 1, fat = 0;
    scanf("%i", &N);
    for (i = 1; N > 1; N = N - 1) {
        i = (i * N);
    }
    printf("%d\n", i);
    return 0;
}