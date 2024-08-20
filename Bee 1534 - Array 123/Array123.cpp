//Bee 1534 - Array 123
//I'm lazy and don't want to fix this one yet

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int N, i, j, x = 0;
    do {
        cin >> N;
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (i + j == N - 1) {
                    cout << "2";
                    x++;
                } else if (i == j) {
                    cout << "1";
                    x++;
                } else {
                    cout << "3";
                    x++;
                }
                if (x == N) {
                    cout << endl;
                    x = 0;
                }
            }
        }
    } while (N != EOF);
    return 0;
}