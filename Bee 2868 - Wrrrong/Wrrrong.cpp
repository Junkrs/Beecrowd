//Bee 2868 - Wrrrong!

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int C, i, n1, n2, resp, respCerta, dist, j;
    char op, sinalIgual;
    cin >> C;
    for (i = 0; i < C; i++) {
        cin >> n1 >> op >> n2 >> sinalIgual >> resp;
        if (op == '+') {
            respCerta = (n1 + n2);
        } else if (op == '-') {
            respCerta = (n1 - n2);
        } else if (op == 'x') {
            respCerta = (n1 * n2); 
        }
        if (respCerta > resp) {
            dist = respCerta - resp;
            cout << "E";
            for (j = 0; j < dist; j++) {
                cout << "r";
            }
            cout << "ou!" << endl;
        } else if (resp > respCerta) {
            dist = resp - respCerta;
            cout << "E";
            for (j = 0; j < dist; j++) {
                cout << "r";
            }
            cout << "ou!" << endl;
        }
    }
    return 0;
}