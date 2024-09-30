//Bee 3126 - Training List

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, C, foi, contagem = 0;
    cin >> C;
    for (i = 0; i < C; i++) {
        cin >> foi;
        if (foi == 1) {
            contagem++;
        }
    }
    cout << contagem << endl;
    return 0;
}