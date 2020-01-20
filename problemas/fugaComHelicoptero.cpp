#include <iostream>

using namespace std;

int main()
{
    int H, P, F, D;

    cin >> H >> P >> F >> D;

    if (D == -1) {

        if (H > P and P > F || P > F and F > H || F > H and H > P) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }

    } else {

        if (H > F and F > P || P > H and H > F || F > P and P > H) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    }

    //  para D = -1 =  HPF ou PFH ou FHP 
    //  para D = 1 =  HFP ou PHF ou FPH
    //  são as posições dos pontos no círculo começando da direita 15 até a esquerda 0   

}
   
    






  












   



    


