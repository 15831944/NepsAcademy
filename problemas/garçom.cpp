#include <iostream>

using namespace std;

int main() {

    int qtd;
    int lata;
    int copo;
    int total = 0;

    cin >> qtd;

    for (size_t i = 0; i < qtd; i++)
    {
        cin >> lata >> copo;

        if(lata > copo) {

            total += copo;

        }
    }

    cout << total;
    
}