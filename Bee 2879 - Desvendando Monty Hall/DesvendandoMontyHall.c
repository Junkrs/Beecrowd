//Bee 2879 - Desvendando Monty Hall

#include <stdio.h>
int main() {
    int N, i, porta, ganho = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &porta);
        if (porta != 1) {
            ganho++;
        }
    }
    printf("%d\n", ganho);
    return 0;
}