#include <iostream>

using namespace std;

int main() {

    int qtd;
    int seg;
    int diff = 0;
    int tempo = 0;

    cin >> qtd;

    for (size_t i = 0; i < qtd; i++) {

        cin >> seg;

        if(tempo == 0) {

            tempo = seg+10;

            diff += seg;

        } else if(seg > tempo) {

            diff += seg - tempo;

        } 

        tempo = seg+10;
        
       
    }

    cout << tempo - diff;
    
}
