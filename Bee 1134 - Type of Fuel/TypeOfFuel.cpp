//Bee 1134 - Type of Fuel

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int cod, gas = 0, alc = 0, die = 0;
    do {
        cin >> cod;
        if (cod == 1) {
            alc++;
        } else if (cod == 2) {
            gas++;
        } else if (cod == 3) {
            die++;
        }
    } while (cod != 4);
    cout << "MUITO OBRIGADO" << endl << "Alcool: " << alc << endl << "Gasolina: " << gas << endl << "Diesel: " << die << endl;
    return 0;
}