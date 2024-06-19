//Bee 1078 - Multiplication Table

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int N, i;
    cin >> N;
    
    for (i = 1; i <= 10; i++) {
        cout << i << " x " << N << " = " << i * N << endl;
    }

    return 0;
}