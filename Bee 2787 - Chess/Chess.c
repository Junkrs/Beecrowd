//Bee 2787 - Chess

#include <stdio.h>
int main () {
    int Linha, Coluna; 
    scanf("%d", &Linha);
    scanf("%d", &Coluna);
    if ((Linha == Coluna) || (Linha % 2 != 0 && Coluna % 2 != 0) || (Linha % 2 == 0 && Coluna % 2 == 0)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}