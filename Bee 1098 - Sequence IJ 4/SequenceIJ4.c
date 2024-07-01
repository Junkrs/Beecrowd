//Bee 1098 - Sequence IJ 4

#include <stdio.h>
int main() {
    float i = 0.0, j1 = 1.0, j2 = 2.0, j3 = 3.0;
    int x, y;
    printf("I=0 J=1\nI=0 J=2\nI=0 J=3\n");
    do {
        j1 = j1 + 0.2;
        j2 = j2 + 0.2;
        j3 = j3 + 0.2;
        i = i + 0.2;
        if (i == 1.0) {
            printf("I=%.0f J=%.0f\nI=%.0f J=%.0f\nI=%.0f J=%.0f\n", i, j1, i, j2, i, j3);
        } else {
            printf("I=%.1f J=%.1f\nI=%.1f J=%.1f\nI=%.1f J=%.1f\n", i, j1, i, j2, i, j3);
        } 
    } while (i <= 1.8);
    printf("I=2 J=3\nI=2 J=4\nI=2 J=5\n", j1, j2, j3);
    return 0;
}