#include <iostream>
using namespace std;

int main()
{

    int tp1, tp2, tp3;

    cin >> tp1 >> tp2 >> tp3;

    if (tp1 < tp2) {
        if (tp2 < tp3) {
            cout <<"1\n2\n3";
        } else if (tp3 < tp1) {
            cout << "3\n1\n2";
        } else {
            cout << "1\n3\n2";
        }
    
    } else {
        if (tp3 < tp2) {
            cout << "3\n2\n1";
        } else if (tp1 < tp3) {
            cout << "2\n1\n3";
        } else {
            cout << "2\n3\n1";
        }
    }
}



