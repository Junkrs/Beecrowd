//Bee 1987 - Divisibility by 3

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n, m, i, soma, aux;
    while (cin >> n >> m) {
        soma = 0;
        aux = m;
        for (i = 0; i < n; i++) {
            soma += aux % 10;
            aux /= 10;
        }
        if (soma % 3 == 0) {
            cout << soma << " sim" << endl;
        } else {
            cout << soma << " nao" << endl;
        }
    }
    return 0;
}