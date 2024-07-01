//Bee 1116 - Dividing X by Y

#include <stdio.h>
int main() {
    int N, X, Y, i; 
    scanf("%i", &N);
    for (i = 1; i <= N; i++) {
        scanf("%i %i", &X, &Y);
        if (Y == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n", (X * 1.0) / (Y * 1.0));
        }
    }
    return 0;
}