//Bee 1013 - The Greatest

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, maior, maiort;
    cin >> a >> b >> c;
    
    maior = ((a+b+abs(a-b)))/2;
	maiort = ((maior+c+abs(maior-c)))/2;

    cout << maiort << " eh o maior" << endl;
    return 0;
}