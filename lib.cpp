#include "lib.h"
bool numprimo(int a, int i){
    if(a % i == 0){
        if(a == i){
            return true;
        }
        else{
            return false;
        }
    }
    numprimo(a, i + 1);}
