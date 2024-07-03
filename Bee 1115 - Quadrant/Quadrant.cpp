//Bee 1115 - Quadrant

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int X, Y;
    do {
        cin >> X >> Y;
        if (X > 0 && Y > 0) {
            cout << "primeiro" << endl;
        } else if (X > 0 && Y < 0) {
            cout << "quarto" << endl;
        } else if (X < 0 && Y < 0) {
            cout << "terceiro" << endl;
        } else if (X < 0 && Y > 0) {
            cout << "segundo" << endl;
        } else {
            break;
        }
    } while (X != 0 || Y != 0);
    return 0;
}