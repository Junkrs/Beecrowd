//Bee 1156 - S Sequence II

#include <stdio.h>
int main() {
    int i, j = 1;
    float S = 0.0;
    for (i = 1; i <= 39; i = i + 2) {
        S += i/j;
        j = j * 2;
    }
    printf("%.2f\n", S * 2);
    return 0;
}