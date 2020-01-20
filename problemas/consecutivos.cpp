#include <iostream>

using namespace std;

int main() {

    int qtd;
    int num = 0;
    int backup;
    int res = 0;
    int resfinal = 0;

    cin >> qtd;

    for (int i = 1; i <= qtd; i++) {
        
        cin >> num;

        if(num == backup) {

            res++;

        } else {

            if(resfinal < res) {

                resfinal = res;

            }

            res = 0;
        }


        backup = num;

    }

    if(resfinal < res) {

        resfinal = res;
    
    }


    cout << resfinal+1 << endl;
    
}