//Bee 1190 - Right Area

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i, j, c = 0, d = 11, e = 7;
    double M[12][12], res;
    char O;
    cin >> O;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    for (i = 1; i < 11; i++) {
        if (i <= 5) {
            for (j = d; j <= 11; j++) {
                res += M[i][j];
                c++;
            }
            d--;
        } else {
            for (j = e; j <= 11; j++) {
                res += M[i][j];
                c++;
            }
            e++;
        }
    }
    if (O == 'S') {
        cout << fixed << setprecision(1) << res << endl;
    } else if (O == 'M') {
        cout << fixed << setprecision(1) << res / c << endl;
    }    
    return 0;
}