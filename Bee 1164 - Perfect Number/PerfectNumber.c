//Bee 1064 - Perfect Number

#include <stdio.h>
int main() {
    int N, num, i, j, somad;
    scanf("%i", &N); 
    for (i = 1; i <= N; i++) {
        scanf("%i", &num);
        somad = 0;
        for (j = 1; j <= num/2; j++) {
            if (num % j == 0) {
                somad += j;
            } else {
                somad += 0;
            }
        }
        if (somad == num) {
            printf("%i eh perfeito\n", num);
        } else {
            printf("%i nao eh perfeito\n", num);
        }
    }
    return 0;
}