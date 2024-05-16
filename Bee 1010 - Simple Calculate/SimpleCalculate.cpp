//Bee 1010 - Simple Calculate

#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int cod1, cod2, nprod1, nprod2;
    double prec1, prec2, valor;

    cin >> cod1 >> nprod1 >> prec1;
    cin >> cod2 >> nprod2 >> prec2;

    valor = (nprod1 * prec1) + (nprod2 * prec2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valor << endl;
    return 0;
}