//Bee 3358 - Surname is not Easy

#include <stdio.h>
#include <string.h>
int main() {
    int nNomes, dificil, i, sla[42], j;
    char sobrenome[42];
    scanf("%d", &nNomes); 
    for (j = 0; j < nNomes; j++) {
        dificil = 0;
        scanf("%s", sobrenome);
        for (i = 0; i < strlen(sobrenome); i++) {
            if (sobrenome[i] == 'a' || sobrenome[i] == 'e' || sobrenome[i] == 'i' || sobrenome[i] == 'o' || sobrenome[i] == 'u' || sobrenome[i] == 'A' || sobrenome[i] == 'E' || sobrenome[i] == 'I' || sobrenome[i] == 'O' || sobrenome[i] == 'U') {
                sla[i] = 0;
            } else {
                sla[i] = 1;
            }
        }
        for (i = 1; i < (strlen(sobrenome)) - 1; i++) {
            if (sla[i] == 1 && sla[i - 1] == 1 && sla[i + 1] == 1) {
                dificil++;
            }
        }
        if (dificil > 0) {
            printf("%s nao eh facil\n", sobrenome);
        } else {
            printf("%s eh facil\n", sobrenome);
        }    
    }
    return 0;
}