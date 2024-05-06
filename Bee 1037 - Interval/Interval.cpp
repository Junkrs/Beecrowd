//Bee 1037 - Interval

#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    float X;
    cin >> X;

    if(X >= 0.0 && X <= 25.0){
        cout << "Intervalo [0,25]" << endl;
    } else if (X > 25.0 && X <= 50.0) {
        cout << "Intervalo (25,50]" << endl;
    } else if (X > 50.0 && X <= 75.0) {
        cout << "Intervalo (50,75]" << endl;
    } else if (X > 75.0 && X <= 100.0) {
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl; 
    }

    return 0;    
}    