//Bee 2807 - Iccanobif

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int N, i, fib[40]; 
    fib[0] = 1;
    fib[1] = 1;
    cin >> N;
    for (i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (i = N - 1; i >= 1; i--) {
        cout << fib[i] << " ";
    }
    cout << "1" << endl;
    return 0;
}