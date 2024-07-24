//Bee 1150 - Exceeding Z

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int X, Z, i, j = 0, valor = 0;
    cin >> X;
    do {
        cin >> Z;
    } while (Z <= X);
    for (i = X; j <= Z; i++) {
        j += i;
        valor++;
    }
    cout << valor << endl;
    return 0;
}