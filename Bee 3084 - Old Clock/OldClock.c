//Bee 3084 - Old Clock

#include <stdio.h>
int main() {
    int horaGrau, minutoGrau, hora, minuto;
    while (scanf("%d %d", &horaGrau, &minutoGrau) != EOF) {
        hora = horaGrau / 30;
        minuto = minutoGrau / 6;
        if (hora < 10) {
            printf("0%d:", hora);
        } else {
            printf("%d:", hora);
        }
        if (minuto < 10) {
            printf("0%d\n", minuto);
        } else {
            printf("%d\n", minuto);
        }
    }
    return 0;
}