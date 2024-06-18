//Bee 1048 - Salary Increase

#include <stdio.h>
int main()
{
    float sal ;
    scanf("%f", &sal);
    if (sal >= 0.00 && sal <= 400.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", sal + (sal * 0.15), (sal * 0.15));
    } else if (sal > 400.00 && sal <= 800.00) {
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", sal + (sal * 0.12), (sal * 0.12));
    }else if (sal > 800.00 && sal <= 1200.00) {
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", sal + (sal * 0.10), (sal * 0.10));
    }else if (sal > 1200.00 && sal <= 2000.00) {
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", sal + (sal * 0.07), (sal * 0.07));
    }else if (sal > 2000.00) {
      printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", sal + (sal * 0.04), (sal * 0.04));
    }
    return 0;
}    