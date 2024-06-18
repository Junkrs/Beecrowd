//Bee 1051 - Taxes

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float sal, sal2;
    cin >> sal;
    sal2 = sal - 2000;

     if (sal >= 0.00 && sal <= 2000.00) {
        cout << "Isento" << endl;
    }else if (sal > 2000.00 && sal <= 3000.00) {
        cout << "R$ " << fixed << setprecision(2) << (sal - 2000) * 0.08 << endl;
    }else if (sal > 3000.00 && sal <= 4500.00) {
        cout << "R$ " << fixed << setprecision(2) << ((sal2 - 1000) * 0.18) + (1000 * 0.08) << endl;
    }else if (sal > 4500.00) {
        cout << "R$ " << fixed << setprecision(2) << (sal2 - 2500) * 0.28 + (1500.00 * 0.18) + (1000.00 * 0.08) << endl;
    }

    return 0;
}