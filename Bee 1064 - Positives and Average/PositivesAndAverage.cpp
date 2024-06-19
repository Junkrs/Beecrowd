//Bee 1064 - Positives and Average

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int i, valp = 0;
    float a, mediap = 0, np = 0;

    for (i = 1; i <= 6; i++){
        cin >> a;
        if (a > 0){
            valp += 1;
            np += a;
            mediap = np / valp;
        }
    }
    cout << valp << " valores positivos" << endl << fixed << setprecision(1) << mediap << endl;

    return 0;
}