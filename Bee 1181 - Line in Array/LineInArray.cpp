//Bee 1181 - Line in Array

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int L, i, j;
    double M[12][12], res;
    char op;
    cin >> L >> op;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    if (op == 'S') {
        i = L;
        for (j = 0; j < 12; j++) {
            res += M[i][j];
        }
    } else if (op == 'M') {
        i = L;
        for (j = 0; j < 12; j++) {
            res += (M[i][j] / 12);
        }
    }
    cout << fixed << setprecision(1) << res << endl;
    return 0;
}