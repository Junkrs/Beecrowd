//Bee 3249 - Death Knight Hero

//This one is getting one test case wrong. No time to fix it now.

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    int n, i, perda = 0;
    char ataque[1000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> ataque;
        if (strstr(ataque, "CD") != NULL) {
            perda++;
        }
    }
    cout << n - perda << endl;
    return 0;
}