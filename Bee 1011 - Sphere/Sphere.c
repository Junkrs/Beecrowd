//Bee 1011 - Sphere

#include <stdio.h>
int main(){
	double R, pi = 3.14159;
	
	scanf("%lf", &R);
	
	printf("VOLUME = %.3lf\n",(4.0/3) * pi * (R*R*R));
	return 0;
}