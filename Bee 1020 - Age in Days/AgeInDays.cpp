//Bee 1020 - Age in Days 

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int diasIn, diasOut, meses, anos;
    cin >> diasIn;    
    
    anos = (diasIn/365);
    meses = ((diasIn%365)/30);
    diasOut = ((diasIn%365)%30);

    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << diasOut << " dia(s)" << endl;
    
    return 0;
}