//Bee 1064 - Positives and Average

#include <stdio.h>

int main()
{
    int i, valp = 0;
    float a, mediap = 0, np = 0;
    for (i = 1; i <= 6; i++){
        scanf("%f", &a);
        if (a > 0){
            valp += 1;
            np += a;
            mediap = np / valp;
        }
    }
    printf("%d valores positivos\n%.1f\n", valp, mediap);
    return 0;
}