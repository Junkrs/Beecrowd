//Bee 1117 - Score Validation

#include <stdio.h>
int main() {
    double nota, aux = 0;
    int i = 0;
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
    return 0;
}