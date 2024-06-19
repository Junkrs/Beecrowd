//Bee 1080 - Highest and Position

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i, pos = 0, maior = 0;
    
    for (i = 1; i < 101; i++) {
        cin >> N;
        if (N > maior) {
            maior = N;
            pos = i;
        }
    }
    cout << maior << endl << pos << endl;
    return 0;
}