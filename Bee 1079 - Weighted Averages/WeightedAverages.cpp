//Bee 1079 - Weighted Averages

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, i;
    float numA, numB, numC, media;
    cin >> N;
    
    for (i = 0; i < N; i++) {
        cin >> numA >> numB >> numC;
        media = ((numA * 2) + (numB * 3) + (numC * 5)) / 10;
        cout << fixed << setprecision(1) << media << endl;
    }
    return 0;
}