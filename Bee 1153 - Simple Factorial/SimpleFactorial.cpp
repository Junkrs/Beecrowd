//Bee 1153 - Simple Factorial

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i = 1, fat = 0;
    cin >> N;
    for (i = 1; N > 1; N = N - 1) {
        i = (i * N);
    }
    cout << i << endl;
    return 0;
}