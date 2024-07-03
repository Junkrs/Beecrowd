//Bee 1114 - Fixed Password

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i;
    do {
        cin >> N;
        if (N != 2002) {
            cout << "Senha Invalida" << endl;
        } else {
            cout << "Acesso Permitido" << endl;
        }
    } while (N != 2002);
    return 0;
}