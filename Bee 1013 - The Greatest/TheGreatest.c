//Bee 1013 - The Greatest

#include <stdlib.h>
#include <stdio.h>
int main(){
	int a, b, c, maior, maiort;
	scanf("%i %i %i", &a, &b, &c); 
	maior = ((a+b+abs(a-b)))/2;
	
	maiort = ((maior+c+abs(maior-c)))/2;
	
	printf("%i eh o maior\n", maiort);
	return 0;
}