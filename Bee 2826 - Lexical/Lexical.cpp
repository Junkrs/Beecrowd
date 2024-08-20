//Bee 2826 - Lexical 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int tamanho1, tamanho2, ordem;
    string palavra1, palavra2;
    cin >> palavra1;
    cin >> palavra2;
    tamanho1 = palavra1.size();
    tamanho2 = palavra2.size();

    if (palavra1 > palavra2) {
        ordem = 1;
    } else if (palavra1 < palavra2) {
        ordem = -1;
    } else {
        ordem = 0;
    }

    if (ordem > 0) {
        cout << palavra2 << endl << palavra1 << endl;
    } else if (ordem < 0) {
        cout << palavra1 << endl << palavra2 << endl;
    }
    return 0;
}