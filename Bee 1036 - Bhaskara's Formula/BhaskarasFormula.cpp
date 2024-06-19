//Bee 1036 - Bhaskara's Formula

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main() {

    double A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    
    if (A == 0 || ((B * B) - 4 * A * C) < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        cout << "R1 = " << fixed << setprecision(5) << (-B + sqrt((B * B) - 4 * A * C))/(2 * A) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-B - sqrt((B * B) - 4 * A * C))/(2 * A) << endl;
    }

    return 0;
}