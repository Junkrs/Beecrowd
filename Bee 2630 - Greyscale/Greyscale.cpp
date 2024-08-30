//Bee 2630 - Greyscale 
//This one is getting an error and I don't wanna fix it now

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int casos, i, R, G, B;
    char tipo[4];
    float olho;
    cin >> casos;
    for (i = 0; i < casos; i++) {
        olho = 0;
        cin >> tipo;
        cin >> R >> G >> B;
        if (strcmp(tipo, "max") == 0) {
           if ((R > G && R > B) || (R == G && R > B) || (R == B && R > G)) {
                cout << "Caso #" << (i + 1) << ": " << R << endl;
            } else if ((G > R && G > B) || (G == R && G > B) || (G == B && G > R)) {
                cout << "Caso #" << (i + 1) << ": " << G << endl;
            } else if ((B > G && B > R) || (B == G && B > R) || (B == R && B > G)) {
                cout << "Caso #" << (i + 1) << ": " << B << endl;
            } 
        } else if (strcmp(tipo, "min") == 0) {
            if ((R < G && R < B) || (R == G && R < B) || (R == B && R < G)) {
                cout << "Caso #" << (i + 1) << ": " << R << endl;
            } else if ((G < R && G < B) || (G == R && G < B) || (G == B && G < R)) {
                cout << "Caso #" << (i + 1) << ": " << G << endl;
            } else if ((B < G && B < R) || (B == G && B < R) || (B == R && B < G)) {
                cout << "Caso #" << (i + 1) << ": " << B << endl;
            }
        } else if (strcmp(tipo, "mean") == 0) {
            cout << "Caso #" << (i + 1) << ": " << (R + G + B) / 3 << endl;
        } else if (strcmp(tipo, "eye") == 0) {
            olho = (0.30 * R) + (0.59 * G) + (0.11 * B);
            cout << "Caso #" << (i + 1) << ": " << fixed << setprecision(0) << floor(olho) << endl;
        }
    }
    return 0;
}