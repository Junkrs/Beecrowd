//Bee 1065 - Prime Number

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, num, i, j, valor;
    cin >> N; 
    for (i = 1; i <= N; i++) {
        cin >> num;
        valor = 0;
        for (j = 2; j <= num; j++) {
            if (num % j == 0) {
                valor++;
            }
        }
        if (valor == 1 && num != 1) {
            cout << num << " eh primo" << endl;
        } else {
            cout << num << " nao eh primo" << endl;
        }
    }
    return 0;
}