//Bee 1051 - Taxes

#include <stdio.h>
 
int main() {
 
    float sal, sal2;
    scanf("%f", &sal);
    sal2 = sal - 2000;
    
    if (sal >= 0.00 && sal <= 2000.00){
        printf("Isento\n");
    }else if (sal > 2000.00 && sal <= 3000.00){
        printf("R$ %.2f\n", (sal - 2000) * 0.08);
    }else if (sal > 3000.00 && sal <= 4500.00){
        printf("R$ %.2f\n", ((sal2 - 1000) * 0.18) + (1000 * 0.08));
    }else if (sal > 4500.00){
        printf("R$ %.2f\n", (sal2 - 2500) * 0.28 + (1500.00 * 0.18) + (1000.00 * 0.08)); 
    }
    return 0;
}