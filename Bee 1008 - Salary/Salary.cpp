//Bee 1008 - Salary

#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int NUM, HORA;
	float PHORA, SAL;

    cin >> NUM >> HORA >> PHORA;
    SAL = HORA * PHORA;

    cout << "NUMBER = " << NUM << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << SAL << endl;
    return 0;
}