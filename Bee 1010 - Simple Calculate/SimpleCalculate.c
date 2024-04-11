//Bee 1010 - Simple Calculate

#include <stdio.h>
int main() {
    int cod1, cod2, nprod1, nprod2;
    double prec1, prec2;
    scanf("%i %i %lf", &cod1, &nprod1, &prec1);
    scanf("%i %i %lf", &cod2, &nprod2, &prec2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", (nprod1 * prec1)+(nprod2 * prec2));
    return 0;
}