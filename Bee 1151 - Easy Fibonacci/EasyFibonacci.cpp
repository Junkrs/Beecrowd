//Bee 1151 - Easy Fibonacci

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i, fib1 = 0, fib2 = 1, fib3 = 0;
    cin >> N;
    for (i = 1; i < N; i++) {
        if (i % 2 == 1) {
            cout << fib3 << " ";
            fib3 = fib1 + fib2;
            fib1 = fib3;
        } else if (i == 2) {
            cout << fib3 << " ";
        } else if (i % 2 == 0) {
            cout << fib3 << " ";
            fib3 = fib1 + fib2;
            fib2 = fib3;
        }
    }
    cout << fib3 << endl;
    return 0;
}