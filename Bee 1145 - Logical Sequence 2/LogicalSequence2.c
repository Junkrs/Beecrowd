//Bee 1145 - Logical Sequence 2

#include <stdio.h>
int main () {
    int X, Y, i, j = 0;
    scanf("%d %d", &X, &Y);
    for (i = 1; i <= Y; i++) {
        j++;
        if (j < X) {
            printf("%d ", i);
        } else if (j == X) {
            printf("%d\n", i);
            j = 0;
        }
    }
    return 0;
}