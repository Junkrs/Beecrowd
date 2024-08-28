//Bee 2003 - Sunday Morning

#include <stdio.h>
int main() {
    int hora, minuto, chegada, atrasoh;
    while (scanf("%d:%d", &hora, &minuto) != EOF) {
        chegada = minuto + 60;
        if (chegada >= 60) {
            minuto = chegada - 60;
            hora++;
            if ((hora == 7 && minuto == 0) || hora - 1 < 7) {
                printf("Atraso maximo: 0\n");
            } else {
                atrasoh = 8 - hora;
                if (atrasoh < 0) {
                    minuto = minuto + (60 * (atrasoh * -1));
                }
                printf("Atraso maximo: %d\n", minuto);
            }
        }
    }
    return 0;
}