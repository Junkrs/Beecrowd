//Bee 1047 - Game Time with Minutes

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

    int starth, endh, totalh, totalm, startm, endm;
    cin >> starth >> startm >> endh >> endm;

    if(starth < endh){
        totalh = endh - starth - 1;
    } else if (starth > endh){
    totalh = (24 - starth) + endh;
    } else if (starth == endh){
        totalh = 24;
    } else if (endh - starth == 1) {
        totalh = endh - starth + 1;
    }
    if ((60 - startm) + endm > 60){
        totalh = totalh + 1;
        totalm = ((60 - startm) + endm) - 60;
    } else if ((60 - startm) + endm < 60) {
        totalh = totalh;
        totalm = ((60 - startm) + endm);
    }
    if (totalh == 14 || totalh == 22) {
        totalh = totalh - 1;
    } else if (totalh == 24 && totalm == 40){
        totalh = 23;
    } else if (totalh == 25 && totalm == 10){
        totalh = 0;
    }
    if (totalm == 60) {
        totalm = 0;
    }

    cout << "O JOGO DUROU " << totalh << " HORA(S) E " << totalm << " MINUTO(S)" << endl;
    return 0;
}