//Bee 1132 - Multiples of 13

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int X, Y, i, soma = 0;
    cin >> X >> Y;
    if (X > Y) {
        for (i = Y; i <= X; i++) {
            if (i % 13 != 0) {
                soma += i;
            }
        }
        cout << soma << endl;
    } else if (X < Y) {
        for (i = X; i <= Y; i++) {
            if (i % 13 != 0) {
                soma += i;
            }
        }
        cout << soma << endl;
    } else {
        soma = 0;
        cout << soma << endl;
    }
    return 0;
}