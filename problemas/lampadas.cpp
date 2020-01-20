#include <iostream>

using namespace std;

int main() {

    int qtd;
    int interruptor;

    int resA = 0;
    int resB = 0;

    cin >> qtd;

    for (int i = 0; i < qtd ; i++)
    {

        cin >> interruptor;

        if(interruptor == 1) {

            if(resA == 0) {

                resA = 1;

            } else {

                resA = 0;
            }
 
             
        } else {

            if(resA == 0) {

                resA = 1;

            } else {

                resA = 0;
            }

            if(resB == 0) {

                resB = 1;

            } else {

                resB = 0;
            }

        }

        
    }

    cout << resA << endl;
    cout << resB << endl;
    
    



}