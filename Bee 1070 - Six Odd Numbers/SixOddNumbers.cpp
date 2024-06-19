//Bee 1070 - Six Odd Numbers

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int i, a, b;
    cin >> a;

    if (a % 2 == 0) {
        b = a + 12;
    } else {
        b = a + 11;
    }
    for (i = a; i <= b; i++){
        if (i % 2 != 0){
            cout << i << endl; 
        }
    }

    return 0;
}