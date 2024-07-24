//Bee  1133 - Rest of a Division

#include <stdio.h>
int main() {
    int X, Y, i;
    scanf("%i %i", &X, &Y);
    if (X > Y && X > 0 && Y > 0) {
        for (i = Y + 1; i < X; i++) {
            if ((i % 5 == 2 || i % 5 == 3) && i > 0) {
                printf("%i\n", i);
            }
        }
    } else if (X < Y && X > 0 && Y > 0) {
        for (i = X + 1; i < Y; i++) {
            if ((i % 5 == 2 || i % 5 == 3) && i > 0) {
                printf("%i\n", i);
            }
        }
    }
    return 0;
}