//Bee 3307 - Decorate the Walk!

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int N, i, area;
    float raio, preco;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> area;
        raio = sqrt(area/(4 * 3.14));
        if (raio < 12.0) {
            preco = area * 0.09; 
            cout << "vermelho = R$ " << fixed << setprecision(2) << preco << endl;
        } else if (raio >= 12.0 && raio <= 15.0) {
            preco = area * 0.07; 
            cout << "azul = R$ " << fixed << setprecision(2) << preco << endl;
        } else if (raio > 15.0) {
            preco = area * 0.05; 
            cout << "amarelo = R$ " << fixed << setprecision(2) << preco << endl;
        }
    }
    return 0;
}