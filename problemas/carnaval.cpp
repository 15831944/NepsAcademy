#include <iostream>

using namespace std;

int main() {

    double nt1, nt2, nt3, nt4, nt5;

    double maior = 5, menor = 10;

    //necessário definir os valores para maior (5, mínima nota possível) e menor (10, máxima nota possível).

    cin >> nt1 >> nt2 >> nt3 >> nt4 >> nt5;

    // maior
    if(nt1 >= maior) {
        maior = nt1;
    } 
    if (nt2 >= maior) {
        maior = nt2;
    } 
    if (nt3 >= maior) {
        maior = nt3;
    } 
    if (nt4 >= maior) {
        maior = nt4;
    } 
     if (nt5 >= maior) {
        maior = nt5;
    }
    
    //menor
    if (nt1 <= menor) {
        menor = nt1;
    }
    if (nt2 <= menor) {
        menor = nt2;
    }
    if (nt3 <= menor) {
        menor = nt3;
    }
    if (nt4 <= menor) {
        menor = nt4;
    }
    if (nt5 <= menor) {
        menor = nt5;
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << (nt1 + nt2 + nt3 + nt4 + nt5) - (maior + menor) << endl;


}
