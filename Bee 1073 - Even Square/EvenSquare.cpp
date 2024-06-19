//Bee 1073 - Even Square

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int N, i;
    cin >> N;
    
    for (i = 2; i <= N; i++) {
        if (i % 2 == 0) {
            cout << i << "^2 = " << i * i << endl;
        }
    }

    return 0;
}