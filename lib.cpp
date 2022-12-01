#include "lib.h"
bool funzione (int n) {
    int i=1,x;

    if(n>1)
        do{
            i++;
            x=n%i;
        }while(x);
    if(i==n){

        return true;


    }
    else{
        return false;
    }

}
