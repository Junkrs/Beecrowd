//Bee 1160 - Population Increase

#include <stdio.h>
int main() {
    int T, i, PA, PB, anos;
    double G1, G2;
    scanf("%i", &T);
    for (i = 1; i <= T; i++) {
        anos = 0;
        scanf("%i %i %lf %lf", &PA, &PB, &G1, &G2);
        do {
            PA += (PA / 100.0) * G1;
            PB += (PB / 100.0) * G2;
            anos++;
            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        } while (PA <= PB);
        if (anos <= 100) {
            printf("%i anos.\n", anos);
        }
    }
    return 0;
}