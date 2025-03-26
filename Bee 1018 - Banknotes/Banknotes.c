//Bee 1018 - Banknotes

#include <stdio.h>
int main()
{
    int valor, total, ncem, ncinquenta, nvinte, ndez, ncinco, ndois, num; 
    scanf("%i", &valor);
    total = valor;
    
    ncem = total / 100;
    total = total - (ncem * 100);
    
    ncinquenta = total / 50;
    total = total - (ncinquenta * 50);
    
    nvinte = total / 20;
    total = total - (nvinte * 20);
    
    ndez = total / 10;
    total = total - (ndez * 10);
    
    ncinco = total / 5;
    total = total - (ncinco * 5);
    
    ndois = total / 2;
    total = total - (ndois * 2);
    
    num = total / 1;
    total = total - (num * 1);
    
    printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", valor, ncem, ncinquenta, nvinte, ndez, ncinco, ndois, num);
    return 0;
}