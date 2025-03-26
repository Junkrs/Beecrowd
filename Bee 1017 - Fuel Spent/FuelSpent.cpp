//Bee 1017 - Fuel Spent

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int HR, DIST; 
	
	cin >> HR >> DIST;
	cout << fixed << setprecision(3) << (HR * DIST)/12.0 << endl;
	
	return 0;
}