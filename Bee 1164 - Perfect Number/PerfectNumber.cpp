//Bee 1064 - Perfect Number

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, num, i, j, somad;
    cin >> N; 
    for (i = 1; i <= N; i++) {
        cin >> num;
        somad = 0;
        for (j = 1; j <= num/2; j++) {
            if (num % j == 0) {
                somad += j;
            } else {
                somad += 0;
            }
        }
        if (somad == num) {
            cout << num << " eh perfeito" << endl;
        } else {
            cout << num << " nao eh perfeito" << endl;
        }
    }
    return 0;
}