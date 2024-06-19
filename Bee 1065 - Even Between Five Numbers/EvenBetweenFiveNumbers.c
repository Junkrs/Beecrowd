//Bee 1065 - Even Between Five Numbers

#include <stdio.h>

int main()
{
    int i, valp = 0, a;
    for (i = 1; i <= 5; i++){
        scanf("%i", &a);
        if (a % 2 == 0){
            valp += 1;
        }
    }
    printf("%d valores pares\n", valp);
    return 0;
}