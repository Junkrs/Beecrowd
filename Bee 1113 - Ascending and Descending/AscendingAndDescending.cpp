//Bee 1113 - Ascending and Descending

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int X, Y;
    do {
        cin >> X >> Y;
        if (X > Y) {
            cout << "Decrescente" << endl;
        } else if (X < Y) {
            cout << "Crescente" << endl;
        }
    } while (X != Y);
    return 0;
}