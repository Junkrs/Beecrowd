//Bee 1182 - Column in Array

#include <stdio.h>
int main() {
    int C, i, j;
    double M[12][12], res;
    char T;
    scanf("%d", &C);
    scanf(" %c", &T);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    if (T == 'S') {
        j = C;
        for (i = 0; i < 12; i++) {
            res += M[i][j];
        }
    } else if (T == 'M') {
        j = C;
        for (i = 0; i < 12; i++) {
            res += (M[i][j] / 12);
        }
    }
    printf("%.1lf\n", res);
    return 0;
}