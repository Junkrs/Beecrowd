//Bee 1017 - Fuel Spent

#include <stdio.h>
#include <math.h>
int main(){
	int HR, DIST; 
	scanf("%i %i", &HR, &DIST);
    
	printf("%.3f\n", (HR * DIST)/12.0);
	
	return 0;
}