//Bee 1065 - Even Between Five Numbers

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i, valp = 0, a;

    for (i = 1; i <= 5; i++){
        cin >> a;
        if (a % 2 == 0){
            valp += 1;
        }
    }
    cout << valp << " valores pares" << endl;
    return 0;
}