#include <iostream>

using namespace std;

int main() {

    int cv, ce, cs, fv, fe, fs, resc, resf;

    cin >> cv >> ce >> cs >> fv >> fe >> fs;

    cv *= 3;
    fv *= 3;

    resc = cv + ce;
    resf = fv + fe;

    if (resc > resf) {
        cout << "C\n";
    } else if (resc == resf) {
        if (cs > fs) {
            cout<< "C\n";
        } else if (cs == fs) {
            cout << "=";   
        } else {
            cout << "F\n";
        }
    } else {
        cout << "F\n";
    }




    

}
