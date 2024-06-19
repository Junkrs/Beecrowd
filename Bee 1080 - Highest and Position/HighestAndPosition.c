//Bee 1080 - Highest and Position

#include <stdio.h>
int main() {
    int N, i, pos = 0, maior = 0;
    
    for (i = 1; i < 101; i++) {
        scanf("%i", &N);
            if (N > maior) {
                maior = N;
                pos = i;
            }
    }
    printf("%i\n%i\n", maior, pos);
    return 0;
}