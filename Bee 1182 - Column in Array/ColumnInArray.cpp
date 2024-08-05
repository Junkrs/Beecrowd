//Bee 1182 - Column in Array

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int C, i, j;
    double M[12][12], res;
    char T;
    cin >> C >> T;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    if (T == 'S') {
        j = C;
        for (i = 0; i < 12; i++) {
            res += M[i][j];
        }
    } else if (T == 'M') {
        j = C;
        for (i = 0; i < 12; i++) {
            res += (M[i][j] / 12);
        }
    }
    cout << fixed << setprecision(1) << res << endl;
    return 0;
}