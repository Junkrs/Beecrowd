//Bee 1014 - Consumption

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int km;
    float l, avg;

    cin >> km >> l;
    avg = km/l;

    cout << fixed << setprecision(3) << avg << " km/l" << endl;
    return 0;
}