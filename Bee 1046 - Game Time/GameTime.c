//Bee 1046 - Game Time

#include <stdio.h>

int main()
{
    int start, end, total;
    scanf("%i %i", &start, &end);
    
    if(start < end){
        total = end - start;
    } else if (start > end){
    total = (24 - start) + end;
    } else if (start == end){
        total = 24;
    }
    
    printf("O JOGO DUROU %i HORA(S)\n", total);
    return 0;
}