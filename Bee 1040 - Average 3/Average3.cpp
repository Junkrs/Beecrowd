//Bee 1040 - Average 3

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float N1, N2, N3, N4, NE ,media, mediaf;
    cin >> N1 >> N2 >> N3 >> N4 >> NE;

    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10.0;

    if (media >= 7.0){
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno reprovado." << endl;
    } else if (media >= 5.0 && media < 7.0) {
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << fixed << setprecision(1) << NE << endl;
        mediaf = (media + NE) / 2.0;
        if (mediaf >= 5.0){
            cout << "Aluno aprovado." << endl << "Media final: " << fixed << setprecision(1) << mediaf << endl;
        } else {
            cout << "Aluno reprovado." << endl << "Media final: " << fixed << setprecision(1) << mediaf << endl;
        }
    }

    return 0;
}