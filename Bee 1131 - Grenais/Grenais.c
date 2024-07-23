//Bee 1131 - Grenais

#include <stdio.h>
int main() {
    int vitGrem = 0, vitInt = 0, resp, golsInt, golsGrem, jogs = 0, empate = 0;
    do {
        scanf("%i %i", &golsInt, &golsGrem);
        if (golsInt > golsGrem) {
            vitInt++;
            jogs++;
        } else if (golsGrem > golsInt) {
            vitGrem++;
            jogs++;
        } else if (golsInt == golsGrem) {
            empate++;
            jogs++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &resp);
    } while (resp != 2);
    printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\n", jogs, vitInt, vitGrem, empate);
    if (vitInt > vitGrem) {
        printf("Inter venceu mais\n");
    } else if (vitGrem > vitInt) {
        printf("Gremio venceu mais\n");
    } else if (vitGrem == vitInt) {
        printf("Não houve vencedor\n");
    }
    return 0;
}