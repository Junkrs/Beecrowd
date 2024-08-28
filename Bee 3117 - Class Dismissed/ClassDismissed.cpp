//Bee 3117 - Class Dismissed!

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, K, hora, i, atrasados = 0, noHorario = 0;
    cin >> N >> K;
    for (i = 0; i < N; i++) {
        cin >> hora;
        if (hora <= 0) {
            atrasados++; 
        } else if (hora > 0) {
            noHorario++;
        }
    }
    if (atrasados < K) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}