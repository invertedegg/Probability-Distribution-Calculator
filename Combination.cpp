#include "Combination.h"

int fact(int x)
{
    int num = 1;

    for(int i = 1; i < x; i++)
    {
        num *= i;
    }
    return num;
}

int calculateCombination(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}