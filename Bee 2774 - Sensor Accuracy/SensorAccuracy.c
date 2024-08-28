//Bee 2774 - Sensor Accuracy

#include <stdio.h>
#include <math.h>
int main() {
    int H, M, qtd, i;
    double somatoriaMed, medicoes[100000], media, somatoria, resultado;
    while (scanf("%d %d", &H, &M) != EOF) {
        qtd = H * 60 / M;
        somatoriaMed = 0.0;
        somatoria = 0.0;
        for (i = 0; i < qtd; i++) {
            scanf("%lf", &medicoes[i]);
            somatoriaMed += medicoes[i];
        }
        media = somatoriaMed / qtd;
        for (i = 0; i < qtd; i++) {
            somatoria += pow((medicoes[i] - media), 2);
        }
        resultado = sqrt(somatoria / (qtd - 1.0));
        printf("%.5f\n", resultado);
    }
    return 0;
}