//Bee 1118 - Several Scores with Validation

#include <stdio.h>
int main() {
    double nota, aux = 0;
    int i, X;
    do {
        nota = 0.0;
        i = 0;
        aux = 0;
        do {
            scanf("%lf", &nota);
            if (nota >= 0.00 && nota <= 10.00) {
                i++;
                aux += nota;
            } else {
                printf("nota invalida\n");
            }
        } while (i < 2);
        printf("media = %.2lf\n", aux / 2.00);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%i", &X);
        } while (X != 1 && X != 2);
    } while (X == 1);
    return 0;
}