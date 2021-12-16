// This class calculates the combination of
// two integers, n and r
#include "Combination.h"
#include <math.h>
#include <iostream>
using namespace std;
using namespace C;

unsigned long long int Combination::fact(int x)
{
    unsigned long long int num = 1;

    for(int i = 1; i <= x;  i++)
    {
        num = num * i;
    }
    return num;
}

int Combination::calculateCombination(int n, int r)
{
    int dem2 = n-r;
    unsigned long long int numer = fact(n);
    unsigned long long int denom = fact(r) * fact(dem2);
    unsigned long long int comb = numer/denom;

    return comb;
}