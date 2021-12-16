#include "Binomial.h"
#include "Combination.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace B;
using namespace C;
using namespace std;

// This class contains all the calculations needed 
// to determine the probability, expected value, standard 
// deviation, or varriance of a Binomial Distribution

// Calculates exact probability that x amount of successes 
// occur in n amount of trials, given a probability p of success
double Binomial::calculateProbability(int x, int n, double p)
{
    Combination c;

    return (c.calculateCombination(n, x)) * pow(p, (double)x) * pow((1-p), (double)(n-x));
}

// Calculates cumulative probability that x amount of successes 
// occur in n amount of trials, given a probability p of success. Boolean
// argument determines what type of cumulative; False means P(X <= x),
// True means P(X >= x)
double Binomial::cumulativeProbability(int x, int n, double p, bool t)
{
    double ans = 0;

    if(t)
    {
        for(int a = x; a <= 5; a++)
        {
            ans += calculateProbability(a, n, p);
        }
    } else 
    {
        for(int a = 0; a <= x; a++)
        {
            ans += calculateProbability(a, n, p);
        }
    }

    return ans;
}