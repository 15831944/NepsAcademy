#include <iostream>

using namespace std;

int main() {

    double nt1, nt2, res;

    cin >> nt1 >> nt2;

    res = (nt1 + nt2) / 2;

    if (res >= 7) {
    cout << "Aprovado\n";
    } else if (res >= 4) {
    cout << "Recuperacao\n";
    } else {
    cout << "Reprovado\n";
} 

}



