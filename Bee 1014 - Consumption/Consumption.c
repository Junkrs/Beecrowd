//Bee 1014 - Consumption

#include <stdio.h>
int main(){
	int km; 
	float l, avg;
	
	scanf("%i %f", &km, &l);
	avg = km / l;
	
	printf("%.3f km/l\n", avg);
	return 0;
}