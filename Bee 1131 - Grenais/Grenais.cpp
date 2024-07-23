//Bee 1131 - Grenais

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int vitGrem = 0, vitInt = 0, resp, golsInt, golsGrem, jogs = 0, empate = 0;
    do {
        cin >> golsInt >> golsGrem;
        if (golsInt > golsGrem) {
            vitInt++;
            jogs++;
        } else if (golsGrem > golsInt) {
            vitGrem++;
            jogs++;
        } else if (golsInt == golsGrem) {
            empate++;
            jogs++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> resp;
    } while (resp != 2);
    cout << jogs << " grenais" << endl << "Inter:" << vitInt << endl << "Gremio:" << vitGrem << endl << "Empates:" << empate << endl;
    if (vitInt > vitGrem) {
        cout << "Inter venceu mais" << endl;
    } else if (vitGrem > vitInt) {
        cout << "Gremio venceu mais" << endl;
    } else if (vitGrem == vitInt) {
        cout << "Não houve vencedor" << endl;
    }
    return 0;
}