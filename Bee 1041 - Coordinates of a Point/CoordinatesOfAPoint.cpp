//Bee 1041 - Coordinates of a Point

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float X, Y;
    cin >> X >> Y;
    
    if (X > 0.0 && Y > 0.0) {
        cout << "Q1" << endl;
    } else if (X > 0.0 && Y < 0.0) {
        cout << "Q4" << endl;
    } else if (X < 0.0 && Y < 0.0) {
        cout << "Q3" << endl;
    } else if (X < 0.0 && Y > 0.0) {
        cout << "Q2" << endl;
    } else if (X == 0.0 && Y != 0.0) {
        cout << "Eixo Y" << endl;
    } else if (Y == 0.0 && X != 0.0) {
        cout << "Eixo X" << endl;
    } else if (X == 0.0 && Y == 0.0) {
        cout << "Origem" << endl;
    }

    return 0;
}