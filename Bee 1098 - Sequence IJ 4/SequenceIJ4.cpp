//Bee 1098 - Sequence IJ 4

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    float i = 0.0, j1 = 1.0, j2 = 2.0, j3 = 3.0;
    int x, y;
    cout << "I=0 J=1" << endl << "I=0 J=2" << endl << "I=0 J=3" << endl;
    do {
        j1 = j1 + 0.2;
        j2 = j2 + 0.2;
        j3 = j3 + 0.2;
        i = i + 0.2;
        if (i == 1.0) {
            cout << "I=" << fixed << setprecision(0) << i << " J=" << fixed << setprecision(0) << j1 << endl;
            cout << "I=" << fixed << setprecision(0) << i << " J=" << fixed << setprecision(0) << j2 << endl;
            cout << "I=" << fixed << setprecision(0) << i << " J=" << fixed << setprecision(0) << j3 << endl;
        } else {
            cout << "I=" << fixed << setprecision(1) << i << " J=" << fixed << setprecision(1) << j1 << endl;
            cout << "I=" << fixed << setprecision(1) << i << " J=" << fixed << setprecision(1) << j2 << endl;
            cout << "I=" << fixed << setprecision(1) << i << " J=" << fixed << setprecision(1) << j3 << endl;
        } 
    } while (i <= 1.8);
    cout << "I=2 J=3" << endl << "I=2 J=4" << endl << "I=2 J=5" << endl;
    return 0;
}