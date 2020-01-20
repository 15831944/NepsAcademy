#include <iostream>

using namespace std;

int main() {

    int P1, C1, P2, C2, res1, res2;

    cin >> P1 >> C1 >> P2 >> C2;

    res1 = P1*C1;
    res2 = P2*C2;

    if (res1 > res2) {
        cout << "-1\n";
    } else if (res1 < res2) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    

}
