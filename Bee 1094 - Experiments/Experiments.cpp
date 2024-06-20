//Bee 1094 - Experiments

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N, qtd, i, totalt = 0, totalC = 0, totalR = 0, totalS = 0;
    char bicho;
    float percentC = 0.00, percentR = 0.00, percentS = 0.00;
    cin >> N;
    
    for (i = 1; i <= N; i++) {
        cin >> qtd >> bicho;
        if (bicho == 'C') {
            totalC += qtd;
            totalR = totalR;
            totalS = totalS;
        } else if (bicho == 'R') {
            totalR += qtd;
            totalS = totalS;
            totalC = totalC;
        } else if (bicho == 'S') {
            totalS += qtd;
            totalR = totalR;
            totalC = totalC;
        }
        totalt = totalC + totalR + totalS;
    }
    percentC = (totalC * 100.00) / totalt;
    percentR = (totalR * 100.00) / totalt;
    percentS = (totalS * 100.00) / totalt;
    cout << "Total: " << totalt << " cobaias" << endl;
    cout << "Total de coelhos: " << totalC << endl << "Total de ratos: " << totalR << endl << "Total de sapos: " << totalS << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << percentC << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << percentR << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << percentS << " %" << endl;
    return 0;
}