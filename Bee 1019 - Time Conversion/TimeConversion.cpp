//Bee 1019 - Time Conversion

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int N;
    cin >> N;
    cout << N/3600 << ":" << (N%3600)/60 << ":" << (N%3600)%60 << endl;
    return 0;
}