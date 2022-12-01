#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    int n ;
    cin >> n;
    bool risultato = funzione(n);
    if (risultato == true){
        cout << "numero primo" << endl;
    }
    else
    {
        cout << "numero non primo" << endl;
    }
return 0;
}
