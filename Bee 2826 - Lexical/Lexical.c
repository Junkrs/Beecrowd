//Bee 2826 - Lexical 

#include <stdio.h>
#include <string.h>
int main () {
    int tamanho1, tamanho2, ordem;
    char palavra1[21], palavra2[21];
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    tamanho1 = strlen(palavra1);
    tamanho2 = strlen(palavra2);
    ordem = strcmp(palavra1, palavra2);
    if (ordem > 0) {
        if (tamanho1 > tamanho2) {
            printf("%s\n%s\n", palavra2, palavra1);
        } else if (tamanho1 < tamanho2) {
            printf("%s\n%s\n", palavra2, palavra1);
        } else if (tamanho1 == tamanho2) {
            printf("%s\n%s\n", palavra2, palavra1);
        }
    } else if (ordem < 0) {
        if (tamanho1 > tamanho2) {
            printf("%s\n%s\n", palavra1, palavra2);
        } else if (tamanho1 < tamanho2) {
            printf("%s\n%s\n", palavra1, palavra2);
        } else if (tamanho1 == tamanho2) {
            printf("%s\n%s\n", palavra1, palavra2);
        }
    }
    return 0;
}