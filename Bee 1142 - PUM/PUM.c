//Bee 1142 - PUM

#include <stdio.h>
int main() {
    int N, i = 1, j = 0;
    scanf("%i", &N);
    do {
        i = N * 4;
        j++;
        if (j % 4 == 0) {
            printf("PUM\n");
        } else {
            printf("%i ", j);
        }
    } while (j < i);
    return 0;
}