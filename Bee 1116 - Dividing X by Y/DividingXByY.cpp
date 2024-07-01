//Bee 1116 - Dividing X by Y

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, X, Y, i; 
    cin >> N;
    for (i = 1; i <= N; i++) {
        cin >> X >> Y;
        if (Y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            cout << (X * 1.0) / (Y * 1.0) << fixed << setprecision(1) << endl;
        }
    }
    return 0;
}