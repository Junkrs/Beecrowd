//Bee 3106 - Coding Competition

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int N, i, numAlunos, total = 0, resto;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> numAlunos;
        if (numAlunos % 3 == 0) {
            total += numAlunos;
        } else {
            resto = numAlunos / 3;
            total += resto * 3;
        }
    }
    cout << total << endl;
    return 0;
}