#include "lib.h"

bool NumeroPrimo (int n, int k)
{
    n--;
    if (n > 1)
    {
        if (k%n == 0)
        {
            return false;
        }
        else
        {
            NumeroPrimo(n,k);
        }
    }
    else
    {
        return true;
    }
}
