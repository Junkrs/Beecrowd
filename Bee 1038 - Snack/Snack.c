//Bee 1038 - Snack

#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%i %i", &X, &Y);
    
    if(X == 1){
        printf("Total: R$ %.2f\n", 4.00 * Y);
    } else if ( X == 2) {
        printf("Total: R$ %.2f\n", 4.50 * Y);
    } else if ( X == 3 ) {
        printf("Total: R$ %.2f\n", 5.00 * Y);
    } else if ( X == 4 ) {
       printf("Total: R$ %.2f\n", 2.00 * Y); 
    } else if ( X == 5 ) {
        printf("Total: R$ %.2f\n", 1.50 * Y); 
    }    
    return 0;
}