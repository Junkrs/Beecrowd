//Bee 2774 - Sensor Accuracy

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int H, M, qtd, i;
    double somatoriaMed, medicoes[100000], media, somatoria, resultado;
    while (cin >> H >> M) {
        qtd = H * 60 / M;
        somatoriaMed = 0.0;
        somatoria = 0.0;
        for (i = 0; i < qtd; i++) {
            cin >> medicoes[i];
            somatoriaMed += medicoes[i];
        }
        media = somatoriaMed / qtd;
        for (i = 0; i < qtd; i++) {
            somatoria += pow((medicoes[i] - media), 2);
        }
        resultado = sqrt(somatoria / (qtd - 1.0));
        cout << fixed << setprecision(5) << resultado << endl;
    }
    return 0;
}