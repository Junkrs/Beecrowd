//Bee 1155 - S Sequence

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i;
    float S = 0.0;
    for (i = 1; i <= 100; i++) {
        S += 1.0/i;
    }
    cout << fixed << setprecision(2) << S << endl;
    return 0;
}