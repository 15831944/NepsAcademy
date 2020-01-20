#include <iostream>

using namespace std;

int main() {

    int A, B, C;

    cin >> A >> B >> C;

    if (A == B || A == C || B == C ) {
        cout << "S\n";
    } else if (A + B == C || A + C == B || B + C == A) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    
// Sempre vai ser possível se dois valores forem iguais
// ou se a soma de 2 nºs for igual ao nº restante

}
