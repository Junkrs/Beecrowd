//Bee 1160 - Population Increase

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int T, i, PA, PB, anos;
    double G1, G2;
    cin >> T;
    for (i = 1; i <= T; i++) {
        anos = 0;
        cin >> PA >> PB >> G1 >> G2;
        do {
            PA += (PA / 100.0) * G1;
            PB += (PB / 100.0) * G2;
            anos++;
            if (anos > 100) {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        } while (PA <= PB);
        if (anos <= 100) {
            cout << anos << " anos." << endl;
        }
    }
    return 0;
}