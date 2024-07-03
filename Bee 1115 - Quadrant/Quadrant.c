//Bee 1115 - Quadrant

#include <stdio.h>
int main() {
    int X, Y;
    do {
        scanf("%i %i", &X, &Y);
        if (X > 0 && Y > 0) {
            printf("primeiro\n");
        } else if (X > 0 && Y < 0) {
            printf("quarto\n");
        } else if (X < 0 && Y < 0) {
            printf("terceiro\n");
        } else if (X < 0 && Y > 0) {
            printf("segundo\n");
        } else {
            break;
        }
    } while (X != 0 || Y != 0);
    return 0;
}