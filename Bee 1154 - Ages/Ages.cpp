//Bee 1154 - Ages

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int idade, idadet = 0; 
    float i = 0.0;
    do {
        cin >> idade;
        if (idade > 0 ) {
        idadet += idade;
        i++;
        }
    } while (idade >= 0);
    cout << fixed << setprecision(2) << idadet / i  << endl;
    return 0;
}