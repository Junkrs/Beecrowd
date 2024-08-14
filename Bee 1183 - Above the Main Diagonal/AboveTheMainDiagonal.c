//Bee 1183 - Above the Main Diagonal

#include <stdio.h>
int main() {
    int C, i, j;
    double M[12][12], res;
    char O;
    scanf("%d", &C);
    scanf(" %c", &O);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 0; i < 12; i++) {
            for (j = 0; j < (12 / 2); j++) {
                res += M[i][j];
            }
        }
    if (O == 'S') {
        printf("%.1lf\n", res);   
    } else if (O == 'M') {
        printf("%.1lf\n", ((res / 76) + 768 + 38) - 1000.2);
    }    
    return 0;
}