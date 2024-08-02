//Bee 1177 - Array Fill II

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int T, N[1000], i, j;
    cin >> T;
    for (i = 0; i < 1000; i++) {
        if (j >= T) {
            j = 0;
        }
        cout << "N[" << i << "] = " << j << endl; 
        j++;
    }
    return 0;
}