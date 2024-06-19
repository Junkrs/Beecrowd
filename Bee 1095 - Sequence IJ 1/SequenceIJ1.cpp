//Bee 1095 - Sequence IJ 1

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i = 1, j = 60;
    
    do {
        cout << "I=" << i << " J=" << j << endl; 
        i = i + 3;
        j = j - 5;
    } while (j >= 0);
    return 0;
}