//Bee 1045 - Triangle Types

#include <stdio.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if (A >= B + C || B >= A + C || C >= A + B){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A*A == (B*B) + (C*C) || B*B == (A*A) + (C*C) || C*C == (B*B) + (A*A)) {
            printf("TRIANGULO RETANGULO\n"); //triangulo retangulo
        } else if (A*A > (B*B) + (C*C) || B*B > (A*A) + (C*C) || C*C > (B*B) + (A*A)) {
            printf("TRIANGULO OBTUSANGULO\n"); //triangulo obtusangulo
        } else if (A*A < (B*B) + (C*C) || B*B < (A*A) + (C*C) || C*C < (B*B) + (A*A)) {
           printf("TRIANGULO ACUTANGULO\n"); //triangulo acutangulo
        }
        if (A == B && A == C){
            printf("TRIANGULO EQUILATERO\n"); //triangulo equilatero
        } else if ((A == B && A != C) || (B == C && B != A) || (A == C && A != B)) {
            printf("TRIANGULO ISOSCELES\n");//triangulo isosceles
        }
    }
    return 0;
}