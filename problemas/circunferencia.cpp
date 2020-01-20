#include <iostream>

using namespace std;

int main() {


 double raio;

 cin >> raio;

 raio = raio*raio*3.14159;

 cout.precision(2); // Precisão das casas
 cout.setf(ios::fixed); // começa contar precisão depois do ponto

 cout << raio;

}