//Bee 1065 - Prime Number

#include <stdio.h>
int main() {
    int N, num, i, j, valor;
    scanf("%i", &N); 
    for (i = 1; i <= N; i++) {
        scanf("%i", &num);
        valor = 0;
        for (j = 2; j <= num; j++) {
            if (num % j == 0) {
                valor++;
            }
        }
        if (valor == 1 && num != 1) {
            printf("%i eh primo\n", num);
        } else {
            printf("%i nao eh primo\n", num);
        }
    }
    return 0;
}