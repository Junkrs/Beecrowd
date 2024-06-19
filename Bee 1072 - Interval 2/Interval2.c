//Bee 1072 - Interval 2

#include <stdio.h>
int main() {
    int N, i, j = 0, k = 0, num;
    scanf("%i", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%i", &num);
        if (num >= 10 && num <= 20) {
            j++;
        } else {
            k++;
        }
    }
    printf("%i in\n%i out\n", j, k);
    return 0;
}