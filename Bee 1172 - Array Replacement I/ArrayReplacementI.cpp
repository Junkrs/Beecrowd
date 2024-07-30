//Bee 1172 - Array Replacement I

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int X[10], i = 0;
    for (i = 0; i < 10; i++) {
        cin >> X[i];
    }
    for (i = 0; i < 10; i++) {
        if (X[i] <= 0) {
            X[i] = 1;
        }
        cout << "X[" << i << "] = " << X[i] << endl;
    }
    return 0;
}