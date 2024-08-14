//Bee 1190 - Right Area

#include <stdio.h>
int main() {
    int i, j, c = 0, d = 11, e = 7;
    double M[12][12], res;
    char O;
    scanf(" %c", &O);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 1; i < 11; i++) {
        if (i <= 5) {
            for (j = d; j <= 11; j++) {
                res += M[i][j];
                c++;
            }
            d--;
        } else {
            for (j = e; j <= 11; j++) {
                res += M[i][j];
                c++;
            }
            e++;
        }
    }
    if (O == 'S') {
        printf("%.1lf\n", res);   
    } else if (O == 'M') {
        printf("%.1lf\n", res / c);
    }    
    return 0;
}