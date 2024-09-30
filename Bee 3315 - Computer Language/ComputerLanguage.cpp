//Bee 3315 - Computer Language

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    int i, j, maior, alcance, total[5], bin[10000], semanaM;
    for (i = 0; i < 4; i++) {
        total[i] = 0;
        for (j = 0; j < 7; j++) {
            cin >> alcance;
            total[i] += alcance; 
        }
    }
    for (i = 0; i < 4; i++) {
        if (total[i] > maior) {
            maior = total[i];
        }
    }
    semanaM = maior;
    i = 0;
    while (maior > 0) {
        bin[i] = maior % 2;
        i++;
        maior = maior / 2;
    }
    cout << semanaM << " = ";
    for (j = i - 1; j >= 0; j--) {
        cout << bin[j];
    }
    cout << endl;
    return 0;
}