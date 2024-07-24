//Bee 1156 - S Sequence II

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i, j = 1;
    float S = 0.0;
    for (i = 1; i <= 39; i = i + 2) {
        S += i/j;
        j = j * 2;
    }
    cout << fixed << setprecision(2) << S * 2 << endl;
    return 0;
}