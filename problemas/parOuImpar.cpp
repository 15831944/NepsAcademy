#include <iostream>

using namespace std;

int main() {

    int bino;
    int cino;

    cin >> bino >> cino;

    if((bino + cino) % 2 == 0) {
        cout << "Bino";
    } else {
        cout << "Cino";
    }

}