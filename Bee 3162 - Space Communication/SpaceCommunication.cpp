//Bee 3162 - Space Communication

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int N, i, x[100], y[100], z[100], j;
    float comparacao[100], proximo;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            comparacao[j] = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2) + pow(z[i] - z[j], 2));
        }
        proximo = 1000;
        for (j = 0; j < N; j++) {
            if (proximo > comparacao[j] && comparacao[j] != 0) {
                proximo = comparacao[j];
            }
        }
        if (proximo <= 20.0) {
            cout << "A" << endl;
        } else if (proximo > 20.0 && proximo <= 50.0) {
            cout << "M" << endl;
        } else if (proximo > 50.0) {
            cout << "B" << endl;
        }
    }
    return 0;
}