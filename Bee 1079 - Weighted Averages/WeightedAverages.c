//Bee 1079 - Weighted Averages

#include <stdio.h>
int main() {
    int N, i;
    float numA, numB, numC;
    scanf("%i", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%f %f %f", &numA, &numB, &numC);
        printf("%.1f\n", ((numA * 2) + (numB * 3) + (numC * 5)) / 10);
    }
    return 0;
}