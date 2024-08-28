//Bee 3117 - Class Dismissed!

#include <stdio.h>
int main() {
    int N, K, hora, i, atrasados = 0, noHorario = 0;
    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++) {
        scanf("%d", &hora);
        if (hora <= 0) {
            atrasados++; 
        } else if (hora > 0) {
            noHorario++;
        }
    }
    if (atrasados < K) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}