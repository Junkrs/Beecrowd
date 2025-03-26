//Bee 1015 - Distance Between Two Points

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1, x2, y1, y2, res;

    cin >> x1 >> y1 >> x2 >> y2;
    res = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
    cout << fixed << setprecision(4) << res << endl;
    return 0;
}