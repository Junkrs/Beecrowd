//Bee 1146 - Growing Sequences

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i;
    do {
        cin >> N;
        for (i = 1; i < N; i++) {
            cout << i << " ";
        }
        if (N == 0) {
            break;
        } else {
            cout << i << endl;
        }    
    } while (N != 0);
    return 0;
}