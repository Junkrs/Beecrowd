//Bee 2787 - Chess

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int Linha, Coluna; 
    cin >> Linha;
    cin >> Coluna;
    if ((Linha == Coluna) || (Linha % 2 != 0 && Coluna % 2 != 0) || (Linha % 2 == 0 && Coluna % 2 == 0)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}