//Bee 1149 - Summing Consecutive Integers

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int A, N, i, res = 0;
    cin >> A;
    do {
        cin >> N; 
    } while (N <= 0);
    for (i = 0; i < N; i++) {
        res += A + i;
    }
    cout << res << endl;
    return 0;
}