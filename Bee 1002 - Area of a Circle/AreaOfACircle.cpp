//Bee 1002 - Area of a Circle

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double p, R, A;
    p = 3.14159;

    cin >> R;

    A = p * (R*R);

    cout <<  "A=" << fixed << setprecision(4) << A << endl;
    return 0;
}