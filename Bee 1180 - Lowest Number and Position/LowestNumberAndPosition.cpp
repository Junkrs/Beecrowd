//Bee 1180 - Lowest Number and Position

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i, menor = 0, j;
    cin >> N;
    int X[N];
    for (i = 0; i < N; i++) {
        cin >> X[i];
    }
    menor = X[0];
    for (i = 0; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            j = i;
        }
    }
    cout << "Menor valor: " << menor << endl << "Posicao: " << j << endl; 
    return 0;
}