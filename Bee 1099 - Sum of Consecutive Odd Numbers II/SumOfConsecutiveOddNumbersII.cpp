//Bee 1099 - Sum of Consecutive Odd Numbers II

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, X, Y, i, j, soma = 0;
    cin >> N;
    for (i = 1; i <= N; i++) {
        cin >> X >> Y;
        soma = 0;
        if (X == Y) {
            soma = 0;
        } else if (X > Y) {
            for (j = Y + 1; j < X; j++) {
                if (j % 2 == 1) {
                    soma += j;
                }
            }
        } else {
            for (j = X + 1; j < Y; j++) {
                if (j % 2 == 1) {
                    soma += j;
                }
            }
        }
        cout << soma << endl;
    }
    return 0;
}