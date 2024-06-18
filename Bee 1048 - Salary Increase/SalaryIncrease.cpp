//Bee 1048 - Salary Increase

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float sal, nSal, reajuste;
    cin >> sal;

    if (sal >= 0.00 && sal <= 400.00) {
        reajuste = (sal * 0.15);
        nSal = sal + reajuste;

        cout << "Novo salario: "  << fixed << setprecision(2) << nSal <<  endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    } else if (sal > 400.00 && sal <= 800.00) {
        reajuste = (sal * 0.12);
        nSal = sal + reajuste;

        cout << "Novo salario: "  << fixed << setprecision(2) << nSal <<  endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    }else if (sal > 800.00 && sal <= 1200.00) {
        reajuste = (sal * 0.10);
        nSal = sal + reajuste;

        cout << "Novo salario: "  << fixed << setprecision(2) << nSal <<  endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    }else if (sal > 1200.00 && sal <= 2000.00) {
        reajuste = (sal * 0.07);
        nSal = sal + reajuste;

        cout << "Novo salario: "  << fixed << setprecision(2) << nSal <<  endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    }else if (sal > 2000.00) {
        reajuste = (sal * 0.04);
        nSal = sal + reajuste;
        
        cout << "Novo salario: "  << fixed << setprecision(2) << nSal <<  endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}