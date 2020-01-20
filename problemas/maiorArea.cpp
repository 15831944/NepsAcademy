#include <iostream>
using namespace std;

int main()
{
    double lar1, alt1, lar2, alt2;

    cin >> lar1 >> alt1 >> lar2 >> alt2 ;

    if(lar1*alt1 == lar2*alt2) {

       cout << "Empate\n";

    } else if (lar1*alt1 > lar2*alt2) {

        cout << "Primeiro\n";

    } else {

        cout << "Segundo\n";
    }

        
    
  
}
