//Bee 1074 - Even or Odd

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int N, i, num, j;
    cin >> N;
    
    for (i = 0; i < N; i++) {
        cin >> num;
        if (num > 0 && (num % 2 == 0)) {
            cout << "EVEN POSITIVE" << endl;
        } else if (num > 0 && (num % 2 == 1)) {
            cout << "ODD POSITIVE" << endl;
        } else if (num < 0 && (num % 2 == 0)) {
            cout << "EVEN NEGATIVE" << endl;
        } else if (num < 0 && ((num * -1) % 2 == 1)) {
            cout << "ODD NEGATIVE" << endl;
        } else if (num == 0) {
            cout << "NULL" << endl;
        }
    }

    return 0;
}