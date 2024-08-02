//Bee 1174 - Array Selection I

#include <stdio.h>
int main() {
    float A[100];
    int i = 0;
    for (i = 0; i < 100; i++) {
        scanf("%f", &A[i]);
    }
    for (i = 0; i < 100; i++) {
        if (A[i] <= 10.0) {
            printf("A[%i] = %.1f\n", i, A[i]);
        }
    }
    return 0;
}