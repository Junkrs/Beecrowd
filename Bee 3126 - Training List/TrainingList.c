//Bee 3126 - Training List

#include <stdio.h>
int main() {
    int i, C, foi, contagem = 0;
    scanf("%d", &C);
    for (i = 0; i < C; i++) {
        scanf("%d ", &foi);
        if (foi == 1) {
            contagem++;
        }
    }
    printf("%d\n", contagem);
    return 0;
}