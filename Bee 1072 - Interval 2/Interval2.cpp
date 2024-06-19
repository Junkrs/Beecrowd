//Bee 1072 - Interval 2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i, j = 0, k = 0, num;
    cin >> N;
    
    for (i = 0; i < N; i++) {
        scanf("%i", &num);
        if (num >= 10 && num <= 20) {
            j++;
        } else {
            k++;
        }
    }
    cout << j << " in" << endl << k << " out" << endl;
    return 0;
}