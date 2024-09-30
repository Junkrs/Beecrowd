//Bee 3307 - Decorate the Walk!

#include <stdio.h>
#include <math.h>
int main() {
    int N, i, area;
    float raio, preco;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &area);
        raio = sqrt(area/(4 * 3.14));
        if (raio < 12.0) {
            preco = area * 0.09; 
            printf("vermelho = R$ %.2f\n", preco);
        } else if (raio >= 12.0 && raio <= 15.0) {
            preco = area * 0.07; 
            printf("azul = R$ %.2f\n", preco);
        } else if (raio > 15.0) {
            preco = area * 0.05; 
            printf("amarelo = R$ %.2f\n", preco);
        }
    }
    return 0;
}