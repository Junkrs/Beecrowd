//Bee 1715 - Handball

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, M, i, j, feitos = 0, aux, numero[100];
    cin >> N >> M;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cin >> numero[j];
            if (numero[j] == 0) {
                numero[j] = 1;
            } else {
                numero[j] = 0;
            }
            aux += numero[j];
        }
        if (aux == 0) {
            feitos++;
        }
        aux = 0;
    }
    cout << feitos << endl;
    return 0;
}