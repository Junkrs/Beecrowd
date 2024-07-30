//Bee 1158 - Sum of Consecutive Odd Numbers III

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, X, Y, i, j, soma;
    cin >> N;
    for (i = 1; i <= N; i++) {
        cin >> X >> Y;
        soma = 0;
        if (X % 2 == 1) {
            j = 1;
            do {
                soma += X;
                X += 2;
                j++;
            } while (j <= Y);
            cout << soma << endl;
        } else if (X % 2 == 0) {
            X = X + 1;
            j = 1;
            do {
                soma += X;
                X += 2;
                j++;
            } while (j <= Y);
            cout << soma << endl;
        }
    }
    return 0;
}