//Bee 3093 - Guys' Truco 1.0

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    int N, sorte, i, j, A, J, K, Q;
    char cartas[1001];
    cin >> N;
    for (i = 0; i < N; i++) {
        A = 0;
        Q = 0;
        J = 0;
        K = 0;
        cin >> cartas;
        for (j = 0; j < strlen(cartas); j++) {
            if (cartas[j] == 'A') {
                A = 1;
            } else if (cartas[j] == 'J') {
                J = 1;
            } else if (cartas[j] == 'K') {
                K = 1;
            } else if (cartas[j] == 'Q') {
                Q = 1;
            }
        }
        if (A == 1 && Q == 1 && J == 1 && K == 1) {
            cout << "Aaah muleke" << endl;
        } else {
            cout << "Ooo raca viu" << endl;
        }
    }
    return 0;
}