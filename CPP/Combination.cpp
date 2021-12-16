// This class calculates the combination of
// two integers, n and r
#include "Combination.h"
#include <iostream>
using namespace std;
using namespace C;

int Combination::fact(int x)
{
    int num = 1;

    for(int i = 1; i <= x; i++)
    {
        num *= i;
    }
    return num;
}

int Combination::calculateCombination(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}