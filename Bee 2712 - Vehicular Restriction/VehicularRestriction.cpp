//Bee 2712 - Vehicular Restriction

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int N, i, j, erro, tamanho; 
    char S[100];
    cin >> N;
    for (i = 0; i < N; i++) {
        erro = 0;
        cin >> S;
        tamanho = strlen(S);
        if ((tamanho == 8) && ('A' <= S[0] && S[0] <= 'Z') && ('A' <= S[1] && S[1] <= 'Z') && ('A' <= S[2] && S[2] <= 'Z') && (S[3] == '-') && ('0' <= S[4] && S[4] <= '9') && ('0' <= S[5] && S[5] <= '9') && ('0' <= S[6] && S[6] <= '9') && ('0' <= S[7] && S[7] <= '9')) {
            if (S[7] == '1' || S[7] == '2') {
                cout << "MONDAY" << endl;
            } else if (S[7] == '3' || S[7] == '4') {
                cout << "TUESDAY" << endl;
            } else if (S[7] == '5' || S[7] == '6') {
                cout << "WEDNESDAY" << endl;
            } else if (S[7] == '7' || S[7] == '8') {
                cout << "THURSDAY" << endl;
            } else if (S[7] == '9' || S[7] == '0') {
                cout << "FRIDAY" << endl;
            }
        } else {
            cout << "FAILURE" << endl;
        }
    }
    return 0;
}