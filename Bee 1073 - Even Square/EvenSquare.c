//Bee 1073 - Even Square

#include <stdio.h>
int main() {
    int N, i;
    scanf("%i", &N);
    
    for (i = 2; i <= N; i++) {
        if (i % 2 == 0)
        printf("%i^2 = %i\n", i, i * i);
    }
    return 0;
}