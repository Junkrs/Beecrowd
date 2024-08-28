//Bee 3106 - Coding Competition

#include <stdio.h>
int main() {
    int N, i, numAlunos, total = 0, resto;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &numAlunos);
        if (numAlunos % 3 == 0) {
            total += numAlunos;
        } else {
            resto = numAlunos / 3;
            total += resto * 3;
        }
    }
    printf("%d\n", total);
    return 0;
}