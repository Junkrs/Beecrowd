//Bee 3209 - Electrical Outlets

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, i, K, j, O, tomadas;
    cin >> N;
    for (i = 0; i < N; i++) {
        tomadas = 0;
        O = 0;
        K = 0;
        cin >> K;
        for (j = 0; j < K; j++) {
            cin >> O;
            tomadas += O;
        }
        cout << tomadas - (K - 1) << endl;
    }
    return 0;
}