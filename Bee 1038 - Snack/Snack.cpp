//Bee 1038 - Snack

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    
    if(X == 1){
        cout << "Total: R$ " << fixed << setprecision(2) << 4.00 * Y << endl;
    } else if ( X == 2) {
        cout << "Total: R$ " << fixed << setprecision(2) << 4.50 * Y << endl;
    } else if ( X == 3 ) {
        cout << "Total: R$ " << fixed << setprecision(2) << 5.00 * Y << endl;
    } else if ( X == 4 ) {
        cout << "Total: R$ " << fixed << setprecision(2) << 2.00 * Y << endl;
    } else if ( X == 5 ) {
        cout << "Total: R$ " << fixed << setprecision(2) << 1.50 * Y << endl;
    }    
    return 0;
}