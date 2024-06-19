//Bee 1095 - Sequence IJ 1

#include <stdio.h>
int main() {
    int i = 1, j = 60;
    
    do {
        printf("I=%i J=%i\n", i, j);
        i = i + 3;
        j = j - 5;
    } while (j >= 0);
    return 0;
}