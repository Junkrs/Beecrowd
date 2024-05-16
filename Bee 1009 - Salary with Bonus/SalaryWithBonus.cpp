//Bee 1009 - Salary with Bonus

#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    double salfixo, vendas, salbonus;
    string nome;

    cin >> nome;
    cin >> salfixo >> vendas;

    salbonus = salfixo + (vendas * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salbonus << endl;
    return 0;
}