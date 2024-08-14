//Bee 1188 - Inferior Area

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i, j, c = 0, d = 6, e = 5;
    double M[12][12], res;
    char O;
    cin >> O;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    for (i = 7; i < 12; i++) {
            for (j = e; j <= d; j++) {
                res += M[i][j];
                c++;
            }
            d++;
            e--;
        }
    if (O == 'S') {
        cout << fixed << setprecision(1) << res << endl;
    } else if (O == 'M') {
        cout << fixed << setprecision(1) << res / c << endl;
    }    
    return 0;
}