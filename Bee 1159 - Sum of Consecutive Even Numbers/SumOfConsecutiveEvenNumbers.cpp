//Bee 1159 - Sum of Consecutive Even Numbers

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int X, soma, i;
    do {
        cin >> X;
        soma = 0;
        if (X == 0) {
            break;
        } else {
            if (X % 2 == 0) {
                for (i = X; i <= (X + 8); i = i + 2) {
                    soma += i;
                }
            } else {
               for (i = X + 1; i <= (X + 9); i = i + 2) {
                    soma += i;
                } 
            }
        }  
        cout << soma << endl;  
    } while (X != 0);
    return 0;
}