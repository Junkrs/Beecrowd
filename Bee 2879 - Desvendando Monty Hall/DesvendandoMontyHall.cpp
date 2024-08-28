//Bee 2879 - Desvendando Monty Hall

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i, porta, ganho = 0;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> porta;
        if (porta != 1) {
            ganho++;
        }
    }
    cout << ganho << endl;
    return 0;
}