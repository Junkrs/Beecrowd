//Bee 1175 - Array change I

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N[20], i, j = 0;
    for (i = 0; i <= 19; i++) {
        cin >> N[i];
    }
    for (i = 19; i >= 0; i--) {
        cout << "N[" << j << "] = " << N[i] << endl;
        j++;
    }
    return 0;
}