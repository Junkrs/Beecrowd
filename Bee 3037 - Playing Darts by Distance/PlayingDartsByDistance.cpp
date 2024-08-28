//Bee 3037 - Playing Darts by Distance

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i, x, d, cont = 0, joao = 0, maria = 0;
    cin >> N;
    for (i = 0; i < N; i++) {
        joao = 0;
        while (cont < 3) {
            cin >> x >> d;
            joao += (x * d);
            cont++;
        }
        cont = 0;
        maria = 0;
        while (cont < 3) {
            cin >> x >> d;
            maria += (x * d);
            cont++;
        }
        cont = 0;
        if (joao > maria) {
            cout << "JOAO" << endl;
        } else {
            cout << "MARIA" << endl;
        }
    }
    return 0;
}