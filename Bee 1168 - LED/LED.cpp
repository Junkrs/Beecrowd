//Bee 1168 - LED 

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    int N, i, numLed, j;
    char numero[101];
    cin >> N;
    for (i = 0; i < N; i++) {
        numLed = 0;
        cin >> numero;
        for (j = 0; j < strlen(numero); j++) {
            if (numero[j] == '0') {
                numLed += 6;
            } else if (numero[j] == '1') {
                numLed += 2;
            } else if (numero[j] == '2') {
                numLed += 5;
            } else if (numero[j] == '3') {
                numLed += 5;
            } else if (numero[j] == '4') {
                numLed += 4;
            } else if (numero[j] == '5') {
                numLed += 5;
            } else if (numero[j] == '6') {
                numLed += 6;
            } else if (numero[j] == '7') {
                numLed += 3;
            } else if (numero[j] == '8') {
                numLed += 7;
            } else if (numero[j] == '9') {
                numLed += 6;
            } else {
                numLed += 0;
            }
        }
        cout << numLed << " leds" << endl;
    }
    return 0;
}