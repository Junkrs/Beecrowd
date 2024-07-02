//Bee 1145 - Logical Sequence 2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int X, Y, i, j = 0;
    cin >> X >> Y;
    for (i = 1; i <= Y; i++) {
        j++;
        if (j < X) {
            cout << i << " ";
        } else if (j == X) {
            cout << i << endl;
            j = 0;
        }
    }
    return 0;
}