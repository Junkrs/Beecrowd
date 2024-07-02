//Bee 1142 - PUM

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i = 1, j = 0;
    cin >> N;
    do {
        i = N * 4;
        j++;
        if (j % 4 == 0) {
            cout << "PUM" << endl;
        } else {
            cout << j << " ";
        }
    } while (j < i);
    return 0;
}