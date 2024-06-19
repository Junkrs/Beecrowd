//Bee 1070 - Six Odd Numbers

#include <stdio.h>

int main()
{
    int i, a, b;
    scanf("%i", &a);
    if (a % 2 == 0) {
        b = a + 12;
    } else {
        b = a + 11;
    }
    for (i = a; i <= b; i++){
        if (i % 2 != 0){
            printf("%d\n", i);   
        }
    }
    return 0;
}