//Bee 1049 - Animal

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string vert, tip, cla;
    cin >> vert;
    cin >> tip;
    cin >> cla;

    if (vert == "vertebrado") {
        if (tip == "ave") {
            if (cla == "carnivoro") {
                cout << "aguia" << endl;
            } else if (cla == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (tip == "mamifero") {
            if (cla == "onivoro") {
                cout << "homem" << endl;
            } else if(cla == "herbivoro") {
                cout << "vaca" << endl;
            }
        } 
    } else if (vert == "invertebrado") {
        if (tip == "inseto") {
            if (cla == "hematofago") {
                cout << "pulga" << endl;
            } else if (cla == "herbivoro") {
                cout << "lagarta" << endl;
            }

        } else if (tip == "anelideo") {
            if (cla == "onivoro") {
                cout << "minhoca" << endl;
            } else if (cla == "hematofago") {
                cout << "sanguessuga" << endl;
            }
        }
    }
    return 0;
}