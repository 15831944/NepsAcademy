#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;

   if (a == c || b == d) {
       cout <<"V\n";
   } else if (a == d) {
       cout << "F\n";
   }

    //BVBP coral B = a, V = b, B = c, P = d
    //BVPB falsa coral B = a, V = b, P = c, B = d
}
