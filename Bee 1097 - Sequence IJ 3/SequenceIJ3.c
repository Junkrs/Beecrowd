//Bee 1097 - Sequence IJ 3

#include <stdio.h>
int main() {
    int i = 1, j = 7, x, y, a;
    
    do {
        a = j - 3;
        for (x = 1; x <= 3; x++) {
            printf("I=%i J=%i\n", i, j);
            j = j - 1;
            y = a;
            if (j <= y) {
                j = a + 5;
            }
        }
        i = i + 2;
    } while (i <= 9);
    return 0;
}