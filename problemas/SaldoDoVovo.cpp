#include<iostream>

using namespace std;

int main() {

    int N, S, bck, X, res;

    cin >> N >> S;

    bck = S;

    while (N > 0) {

        cin >> X;

        S += X;

        if (S <= bck) {
            res = S;
            bck = S;
        }

        N--;
    }

    cout << res << endl;
}
