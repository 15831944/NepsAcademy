#include <iostream>

using namespace std;

int main() {

    int h1, m1, h2, m2, cont = 0;

    while(cont == 0) {

        cin >> h1 >> m1 >> h2 >> m2;

        if (h1 ==0 and m1 == 0 and h2 == 0 and m2 ==0) {

            cont = 1;

        } else {

            h1*=60;
            h2*=60;

            h1 = h1 + m1;
            h2 = h2 + m2;
            
            if (h1 > h2) {
                cout << (1440 - h1) + h2;      
            } else {        
                cout << h2 - h1;  
            }

        }
        
    }
    
        
 }
