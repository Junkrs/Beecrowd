//Bee 1101 - Sequence of Numbers and Sum

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int M, N, i, soma;
    do {
        cin >> M >> N;
        soma = 0;
        if (M > N && M > 0 && N > 0) {
            for (i = N; i <= M; i++) {
                cout << i << " ";
                soma += i;
            }
            cout << "Sum=" << soma << endl;
        } else if (N > M && M > 0 && N > 0) {
           for (i = M; i <= N; i++) {
                cout << i << " ";
                soma += i;
            }
            cout << "Sum=" << soma << endl;
        }
    } while (M > 0 && N > 0);
    return 0;
}