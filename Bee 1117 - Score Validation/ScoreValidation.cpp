//Bee 1117 - Score Validation

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double nota, aux = 0;
    int i = 0;
    do {
        cin >> nota;
        if (nota >= 0.00 && nota <= 10.00) {
            i++;
            aux += nota;
        } else {
            cout << "nota invalida" << endl;
        }
    } while (i < 2);
    cout << "media = " << aux / 2.00 << endl;
    return 0;
}