//Bee 1005 - Average 1

#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    
    float A, B, MEDIA;
    cin >> A >> B;

    MEDIA = ((A * 3.5 ) + (B * 7.5))/11;

    cout << "MEDIA = "<< fixed << setprecision(5) << MEDIA << endl;

    return 0;
}