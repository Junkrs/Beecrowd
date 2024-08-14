//Bee 1184 - Below the Main Diagonal

#include <stdio.h>
int main() {
    int i, j, c = 0;
    double M[12][12], res;
    char O;
    scanf(" %c", &O);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 0; i < 12; i++) {
            for (j = 0; j < i; j++) {
                res += M[i][j];
                c++;
            }
        }
    if (O == 'S') {
        printf("%.1lf\n", res);   
    } else if (O == 'M') {
        printf("%.1lf\n", res / c);
    }    
    return 0;
}