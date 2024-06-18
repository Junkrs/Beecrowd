//Bee 1043 - Triangle

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float A, B, C, perimetro, area;
    cin >> A >> B >> C;

    if (A < B + C && B < A + C && C < A + B){
        perimetro = A + B + C;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    } else {
        area = ((A + B) * C)/2;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
 
    return 0;
}