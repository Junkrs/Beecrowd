//Bee 3046 - Domino

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int N, res;
    cin >> N;
    res = ((N + 1) * (N + 2)) / 2;
    cout << res << endl;
    return 0;
}