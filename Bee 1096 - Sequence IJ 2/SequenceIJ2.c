//Bee 1096 - Sequence IJ2

#include <stdio.h>
int main() {
    int i = 1, j = 7, x;
    
    do {
        for (x = 1; x <= 3; x++) {
            printf("I=%i J=%i\n", i, j);
            j = j - 1;
            if (j < 5) {
                j = 7;
            }
        }
        i = i + 2;
    } while (i <= 9);
    return 0;
}