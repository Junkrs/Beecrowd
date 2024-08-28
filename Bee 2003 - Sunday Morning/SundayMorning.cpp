//Bee 2003 - Sunday Morning

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int hora, minuto, chegada, atrasoh;
    char pontos;
    while (cin >> hora >> pontos >> minuto) {
        chegada = minuto + 60;
        if (chegada >= 60) {
            minuto = chegada - 60;
            hora++;
            if ((hora == 7 && minuto == 0) || hora - 1 < 7) {
                cout << "Atraso maximo: 0" << endl;
            } else {
                atrasoh = 8 - hora;
                if (atrasoh < 0) {
                    minuto = minuto + (60 * (atrasoh * -1));
                }
                cout << "Atraso maximo: " << minuto << endl;
            }
        }
    }
    return 0;
}