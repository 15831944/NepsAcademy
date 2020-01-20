#include <iostream>

using namespace std;

int main() {
    
    int alunos;
    int monitores;

    cin >> alunos >> monitores;

    if(alunos + monitores <= 50) {
        cout << "S";
    } else {
        cout << "N";
    }

}