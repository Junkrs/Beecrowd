//Bee 1008 - Salary

#include <stdio.h>
int main(){
	int NUM, HORA;
	float PHORA, SAL;
	
	scanf("%i %i %f", &NUM, &HORA, &PHORA);
	SAL = HORA * PHORA;
	
	printf("NUMBER = %i\n", NUM);
	printf("SALARY = U$ %.2f\n", SAL);
	return 0;
}