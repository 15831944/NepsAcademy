#include<iostream>

using namespace std;

int main() {

    int cont, num, soma = 0, dia = 0;

    cin >> cont;

    while (cont > 0) {

        cin >> num;
        
        if (soma < 1000000) {
            soma += num;
            dia++;
        } 

        cont--;
    }

    cout << dia;

}
