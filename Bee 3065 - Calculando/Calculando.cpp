//Bee 3065 - Calculando

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int termos, i, numero1, numerox, resultado, numTeste = 0;
    char operador;
    do {
        cin >> termos; 
        if (termos == 0) {
            break;
        }
        numero1 = 0;
        numerox = 0;
        resultado = 0;
        cin >> numero1;
        resultado = numero1;
        for (i = 1; i < termos; i++) {
            cin >> operador >> numerox;
            if (operador == '-' ) {
                resultado = resultado - numerox;
            } else if (operador == '+') {
                resultado = resultado + numerox;
            } else {
                break;
            }
        }
        numTeste++;
        cout << "Teste " << numTeste << endl << resultado << endl << endl;
    } while (termos != 0);
    return 0;
}