//Bee 3339 - Karina

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int Q, i, j, raizes, L, R;
    cin >> Q;
    for (i = 0; i < Q; i++) {
        raizes = 0;
        cin >> L >> R;
        for (j = 0; j < R; j++) {
            if (pow(j, 2) >= L && pow(j, 2) <= R) {
                raizes++;
            } else if (pow(j, 2) >= R) {
                break;
            }
        }
        cout << raizes << endl;
    }
    return 0;
}