//Bee 1046 - Game Time

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int start, end, total;
    cin >> start >> end;
    
    if (start < end) {
        total = end - start;
    } else if (start > end) {
        total = (24 - start) + end;
    } else if (start == end)  {
        total = 24;
    }
    
    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;

    return 0;
}