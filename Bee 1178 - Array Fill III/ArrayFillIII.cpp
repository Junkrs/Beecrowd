//Bee 1178 - Array Fill III

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i;
    double X, N[100];
    cin >> X;
    for (i = 0; i < 100; i++) {
        N[i] = X;        
        X /= 2;
    }
    for (i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
    }
    return 0;
}