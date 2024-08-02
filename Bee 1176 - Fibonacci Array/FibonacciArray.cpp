//Bee 1176 - Fibonacci Array

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int T, j = 1, i = 0;
    long long int N, fib[60];
    fib[0] = 0;
    fib[1] = 1;
    cin >> T;
    do {
        cin >> N;
        for (i = 2; i <= N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << "Fib(" << N << ") = " << fib[N] << endl;
        j++;
    } while (j <= T);
    return 0;
}