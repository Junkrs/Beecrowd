//Bee 1188 - Inferior Area

#include <stdio.h>
int main() {
    int i, j, c = 0, d = 6, e = 5;
    double M[12][12], res;
    char O;
    scanf(" %c", &O);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 7; i < 12; i++) {
            for (j = e; j <= d; j++) {
                res += M[i][j];
                c++;
            }
            d++;
            e--;
        }
    if (O == 'S') {
        printf("%.1lf\n", res);   
    } else if (O == 'M') {
        printf("%.1lf\n", res / c);
    }    
    return 0;
}