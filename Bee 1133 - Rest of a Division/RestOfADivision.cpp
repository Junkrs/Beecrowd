//Bee  1133 - Rest of a Division

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int X, Y, i;
    cin >> X >> Y;
    if (X > Y && X > 0 && Y > 0) {
        for (i = Y + 1; i < X; i++) {
            if ((i % 5 == 2 || i % 5 == 3) && i > 0) {
                cout << i << endl;
            }
        }
    } else if (X < Y && X > 0 && Y > 0) {
        for (i = X + 1; i < Y; i++) {
            if ((i % 5 == 2 || i % 5 == 3) && i > 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}