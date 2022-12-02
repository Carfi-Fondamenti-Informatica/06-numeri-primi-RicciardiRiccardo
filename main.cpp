#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int a = 0, i = 2;
    cin >> a;
    if(numprimo(a, i) == true){
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;}

