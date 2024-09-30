//Bee 3084 - Old Clock

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int horaGrau, minutoGrau, hora, minuto;
    while (cin >> horaGrau >> minutoGrau) {
        hora = horaGrau / 30;
        minuto = minutoGrau / 6;
        if (hora < 10) {
            cout << "0" << hora << ":";
        } else {
            cout << hora << ":";
        }
        if (minuto < 10) {
            cout << "0" << minuto << endl;
        } else {
            cout << minuto << endl;
        }
    }
    return 0;
}