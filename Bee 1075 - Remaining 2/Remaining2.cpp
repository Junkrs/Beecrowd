//Bee 1075 - Remaining 2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i;
    cin >> N;
    
    for (i = 0; i < 10000; i++) {
        if (i % N == 2) {
            cout << i << endl;
        }
    }
    return 0;
}