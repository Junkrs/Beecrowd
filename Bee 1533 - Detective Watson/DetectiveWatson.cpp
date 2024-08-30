//Bee 1533 - Detective Watson

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, i, maior, correto, maiorSus;
    do {
        correto = 0;
        cin >> N;
        if (N != 0) {
           int grau[1000];
            for (i = 0; i < N; i++) {
                cin >> grau[i];
            }
            maiorSus = 0;
            maior = grau[0];
            for (i = 1; i < N; i++) {
                if (grau[i] > maior) {
                    maior = grau[i];
                    maiorSus = i;
                }
            }
            grau[maiorSus] = -1;
            maiorSus = 1;
            maior = grau[0];
            for (i = 1; i < N; i++) {
                if (grau[i] > maior) {
                    maior = grau[i];
                    maiorSus = i + 1;
                }
            }
            cout << maiorSus << endl;
        }
    } while (N != 0);
    return 0;
}