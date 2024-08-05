//Bee 1181 - Line in Array

#include <stdio.h>
int main() {
    int L, i, j;
    double M[12][12], res;
    char op;
    scanf("%d", &L);
    scanf(" %c", &op);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    if (op == 'S') {
        i = L;
        for (j = 0; j < 12; j++) {
            res += M[i][j];
        }
    } else if (op == 'M') {
        i = L;
        for (j = 0; j < 12; j++) {
            res += (M[i][j] / 12);
        }
    }
    printf("%.1lf\n", res);
    return 0;
}