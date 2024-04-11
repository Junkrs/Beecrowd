//Bee 1002 - Area of a Circle

#include <stdio.h>
int main(){
	double p = 3.14159, R, A;
	
	scanf("%lf", &R);
	
	A = p * (R*R);
	printf("A=%.4lf\n", A);
	return 0;
}