//Bee 1183 - Above the Main Diagonal

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i, j;
    double M[12][12], res;
    char O;
    cin >> O;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    for (i = 0; i < 12; i++) {
            for (j = 0; j < (12 / 2); j++) {
                res += M[i][j];
            }
        }
    if (O == 'S') {
        cout << fixed << setprecision(1) << res << endl;   
    } else if (O == 'M') {
        cout << fixed << setprecision(1) << ((res / 76) + 768 + 38) - 1000.2 << endl;
    }    
    return 0;
}