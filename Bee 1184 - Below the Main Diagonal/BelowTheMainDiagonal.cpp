//Bee 1184 - Below the Main Diagonal

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i, j, c = 0;
    double M[12][12], res;
    char O;
    cin >> O;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    for (i = 0; i < 12; i++) {
            for (j = 0; j < i; j++) {
                res += M[i][j];
                c++;
            }
        }
    if (O == 'S') {
        cout << fixed << setprecision(1) << res << endl;  
    } else if (O == 'M') {
       cout << fixed << setprecision(1) << res / c << endl;  
    }    
    return 0;
}