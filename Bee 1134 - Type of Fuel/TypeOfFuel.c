//Bee 1134 - Type of Fuel

#include <stdio.h>
int main() {
    int cod, gas = 0, alc = 0, die = 0;
    do {
        scanf("%i", &cod);
        if (cod == 1) {
            alc++;
        } else if (cod == 2) {
            gas++;
        } else if (cod == 3) {
            die++;
        }
    } while (cod != 4);
    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", alc, gas, die);
    return 0;
}