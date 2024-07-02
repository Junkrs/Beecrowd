//Bee 1144 - Logical Sequence

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i = 1;
    cin >> N;
    do {
        cout << i  << " " << (i * i) << " " << (i * i * i) << endl;
        cout << i  << " " << (i * i) + 1 << " " << (i * i * i) + 1 << endl;
        i++;
    } while (i <= N);
    return 0;
}