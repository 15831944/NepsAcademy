#include<iostream>

using namespace std;

int main() {

    int num, bck, cont = 0;

    while (cont == 0) {

        cin >> num;

        if (num == 0) {
            cont = 1;
        } else {

            if (num > bck) {
                bck = num;
            }
            
        }

    }

    cout << bck;
   
}
