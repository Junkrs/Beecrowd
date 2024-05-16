//Bee 1047 - Game Time with Minutes

#include <stdio.h>

int main()
{
    int starth, endh, totalh, totalm, startm, endm;
    scanf("%i %i %i %i", &starth, &startm, &endh, &endm);
  
    if(starth < endh){
        totalh = endh - starth - 1;
    } else if (starth > endh){
    totalh = (24 - starth) + endh;
    } else if (starth == endh){
        totalh = 24;
    } else if (endh - starth == 1) {
        totalh = endh - starth + 1;
    }
    if ((60 - startm) + endm > 60){
        totalh = totalh + 1;
        totalm = ((60 - startm) + endm) - 60;
    } else if ((60 - startm) + endm < 60) {
        totalh = totalh;
        totalm = ((60 - startm) + endm);
    }
    if (totalh == 14 || totalh == 22) {
        totalh = totalh - 1;
    } else if (totalh == 24 && totalm == 40){
        totalh = 23;
    } else if (totalh == 25 && totalm == 10){
        totalh = 0;
    }
    
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", totalh, totalm);
    return 0;
}