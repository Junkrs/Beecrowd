//Bee 1154 - Ages

#include <stdio.h>
int main() {
    int idade, idadet = 0; 
    float i = 0.0;
    do {
        scanf("%i", &idade);
        if (idade > 0 ) {
        idadet += idade;
        i++;
        }
    } while (idade >= 0);
    printf("%.2f\n", idadet / i);
    return 0;
}