//Bee 2552 - CheeseBreadSweeper

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    int N, M, i, j, cont = 0;
    while (cin >> N >> M) {
        int matriz[100][100], matrizResultante[100][100];
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                cin >> matriz[i][j];
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                if (matriz[i][j] == 1) {
                    cout << "9";
                } else {
                    cont = 0;
                    if (i) {
                        cont += matriz[i - 1][j];
                    }
                    if (j) {
                        cont += matriz[i][j - 1];
                    }
                    if (i != N - 1) {
                        cont += matriz[i + 1][j];
                    }
                    if (j != M - 1) {
                        cont += matriz[i][j + 1];
                    }
                    cout << cont;
                }
            }
            cout << endl;
        }
    }
    return 0;
}