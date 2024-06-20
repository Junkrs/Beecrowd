//Bee 1094 - Experiments

#include <stdio.h>
int main() {
    int N, qtd, i, totalt = 0, totalC = 0, totalR = 0, totalS = 0;
    char bicho;
    float percentC = 0.00, percentR = 0.00, percentS = 0.00;
    scanf("%i", &N);
    
    for (i = 1; i <= N; i++) {
        scanf("%i %c", &qtd, &bicho);
        if (bicho == 'C') {
            totalC += qtd;
            totalR = totalR;
            totalS = totalS;
        } else if (bicho == 'R') {
            totalR += qtd;
            totalS = totalS;
            totalC = totalC;
        } else if (bicho == 'S') {
            totalS += qtd;
            totalR = totalR;
            totalC = totalC;
        }
        totalt = totalC + totalR + totalS;
    }
    percentC = (totalC * 100.00) / totalt;
    percentR = (totalR * 100.00) / totalt;
    percentS = (totalS * 100.00) / totalt;
    printf("Total: %i cobaias\nTotal de coelhos: %i\nTotal de ratos: %i\nTotal de sapos: %i\n", totalt, totalC, totalR, totalS);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", percentC, percentR, percentS);
    return 0;
}