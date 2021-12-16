#ifndef COMBINATION_H
#define COMBINATION_H

namespace C
{
    class Combination
    {
        public:
            int calculateCombination(int n, int r);

        private:
            int fact(int x);
    };
}

#endif