//Bee 1114 - Fixed Password

#include <stdio.h>
int main() {
    int N, i;
    do {
        scanf("%i", &N);
        if (N != 2002) {
            printf("Senha Invalida\n");
        } else {
            printf("Acesso Permitido\n");
        }
    } while (N != 2002);
    return 0;
}