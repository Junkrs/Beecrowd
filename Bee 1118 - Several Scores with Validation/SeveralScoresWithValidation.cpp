//Bee 1118 - Several Scores with Validation

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double nota, aux = 0;
    int i, X;
    do {
        nota = 0.0;
        i = 0;
        aux = 0;
        do {
            cin >> nota;
            if (nota >= 0.00 && nota <= 10.00) {
                i++;
                aux += nota;
            } else {
                cout << "nota invalida" << endl;
            }
        } while (i < 2);
        cout << "media = " << fixed << setprecision(2) << aux / 2.00 << endl;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> X;
        } while (X != 1 && X != 2);
    } while (X == 1);
    return 0;
}