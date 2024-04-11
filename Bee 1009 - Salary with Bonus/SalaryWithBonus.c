//Bee 1009 - Salary with Bonus

#include <stdio.h>
int main(){
	double salfixo, vendas;
	char nome[15];
	scanf("%s", &nome);
	gets(nome);
	
	scanf("%lf %lf", &salfixo, &vendas);
	
	printf("TOTAL = R$ %.2f\n", salfixo + (vendas * 0.15));
	return 0;
}