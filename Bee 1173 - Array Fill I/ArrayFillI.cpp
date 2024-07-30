//Bee 1173 - Array Fill I

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N[10], i = 0, V, j;
    cin >> V;
    cout << "N[0] = " << V << endl;
    for (i = 1; i < 10; i++) {
        N[i] = V;
        cout << "N[" << i << "] = " << (V *= 2) << endl; 
    }
    return 0;
}