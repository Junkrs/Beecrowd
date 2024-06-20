//Bee 1096 - Sequence IJ2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i = 1, j = 7, x;
    
    do {
        for (x = 1; x <= 3; x++) {
            cout << "I=" << i << " " << "J=" << j << endl;
            j = j - 1;
            if (j < 5) {
                j = 7;
            }
        }
        i = i + 2;
    } while (i <= 9);
    return 0;
}