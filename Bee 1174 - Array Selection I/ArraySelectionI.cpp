//Bee 1174 - Array Selection I

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    float A[100];
    int i = 0;
    for (i = 0; i < 100; i++) {
        cin >> A[i];
    }
    for (i = 0; i < 100; i++) {
        if (A[i] <= 10.0) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << A[i] << endl;
        }
    }
    return 0;
}