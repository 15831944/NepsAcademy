#include <iostream>

using namespace std;

int main() {

    int A, B, C;

    cin >> A >> B >> C;

    if (A == B and B == C) {
        cout << "*\n";
    } else if (B == C and A != B) {
        cout << "A\n";
    } else if (A == C and B != A) {
        cout << "B\n";
    } else {
        cout << "C\n";
    }
}
