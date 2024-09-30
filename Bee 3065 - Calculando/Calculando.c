//Bee 3065 - Calculando

#include <stdio.h>
int main() {
    int termos, i, numero1, numerox, resultado, numTeste = 0;
    char operador;
    do {
        scanf("%d", &termos); 
        if (termos == 0) {
            break;
        }
        numero1 = 0;
        numerox = 0;
        resultado = 0;
        scanf("%d", &numero1);
        resultado = numero1;
        for (i = 1; i < termos; i++) {
            scanf("%c", &operador);
            scanf("%d", &numerox);
            if (operador == '-' ) {
                resultado = resultado - numerox;
            } else if (operador == '+') {
                resultado = resultado + numerox;
            } else {
                break;
            }
        }
        numTeste++;
        printf("Teste %d\n%d\n\n", numTeste, resultado);
    } while (termos != 0);
    return 0;
}