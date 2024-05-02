//Bee 1037 - Interval

#include <stdio.h>

int main()
{
    float X;
    scanf("%f", &X);
    
    if(X >= 0.0 && X <= 25.0){
        printf("Intervalo [0,25]\n");
    } else if (X > 25.0 && X <= 50.0) {
        printf("Intervalo (25,50]\n");
    } else if (X > 50.0 && X <= 75.0) {
        printf("Intervalo (50,75]\n");
    } else if (X > 75.0 && X <= 100.0) {
       printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n"); 
    }    
    return 0;
}