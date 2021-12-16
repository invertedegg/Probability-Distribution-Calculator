#ifndef BINOMIAL_H
#define BINOMIAL_H

namespace B
{
    class Binomial
    {
    public:
        void wasChosen();
        double calculateProbability(int x, int n, double p);
        double cumulativeProbability(int x, int n, double p, bool t);
    };
}
#endif