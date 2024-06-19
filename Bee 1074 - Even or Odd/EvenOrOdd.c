//Bee 1074 - Even or Odd

#include <stdio.h>
int main() {
    int N, i, num, j;
    scanf("%i", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%i", &num);
        if (num > 0 && (num % 2 == 0)) {
            printf("EVEN POSITIVE\n");
        } else if (num > 0 && (num % 2 == 1)) {
            printf("ODD POSITIVE\n");
        } else if (num < 0 && (num % 2 == 0)) {
            printf("EVEN NEGATIVE\n");
        } else if (num < 0 && ((num * -1) % 2 == 1)) {
            printf("ODD NEGATIVE\n");
        } else if (num == 0) {
            printf("NULL\n");
        }
    }
    return 0;
}