//Bee 1189 - Left Area

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i, j, c = 0, d = 0, e = 4;
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
            for (j = 0; j <= d; j++) {
                res += M[i][j];
                c++;
            }
            d++;
        } else {
            for (j = 0; j <= e; j++) {
                res += M[i][j];
                c++;
            }
            e--;
        }
    }
    if (O == 'S') {
       cout << fixed << setprecision(1) << res << endl;
    } else if (O == 'M') {
        cout << fixed << setprecision(1) << res / c << endl;
    }    
    return 0;
}