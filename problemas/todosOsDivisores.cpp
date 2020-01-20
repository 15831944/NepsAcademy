#include <iostream>

using namespace std;

int main() {
    
    int n, cont = 1;

    cin >> n;

    while (cont <= n) {
        if (n % cont == 0) {
            cout << cont << " ";
        }

        cont++;
    }
}
