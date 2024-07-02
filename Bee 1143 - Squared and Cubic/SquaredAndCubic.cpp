//Bee 1143 - Squared and Cubic

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i = 1;
    cin >> N;
    do {
        cout << i  << " " << (i * i) << " " << (i * i * i) << endl;
        i++;
    } while (i <= N);
    return 0;
}