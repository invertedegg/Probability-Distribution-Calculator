# This Python file contains all of the computation
# needed to find the probability of Binomial distributions
import math, Combination

class Binomial:

    # Determines which type of probability, exact 
    # or cumulative, to solve for
    def solveFor(self):
        print("Exact Probability: \t0\nCumulative Probability (X >= x): \t1\nCumulative Probability (X > x): \t2\nCumulative Probability (X <= x): \t3\nCumulative Probability (X < x): \t4")
        x = int(input("Please select value to solve for: "))
        return x

    # Calculates the probability according
    # to the arguments
    def findProbability(self, x, n, p, s):
        ans = 0
        if s == 0:
            return Combination.calculateCombination(n, x) * math.pow(p, x) * math.pow((1 - p), (n - x))
        if s == 1:
            for a in range(x, n+1):
                ans += Combination.calculateCombination(n, a) * math.pow(p, a) * math.pow((1 - p), (n - a))
            return ans
        elif s == 2:
            for a in range(x+1, n+1):
                ans += Combination.calculateCombination(n, a) * math.pow(p, a) * math.pow((1 - p), (n - a))
            return ans
        elif s == 3:
            for a in range(0, x+1):
                ans += Combination.calculateCombination(n, a) * math.pow(p, a) * math.pow((1 - p), (n - a))
            return ans
        elif s == 4:
            for a in range(0, x):
                ans += Combination.calculateCombination(n, a) * math.pow(p, a) * math.pow((1 - p), (n - a))
            return ans
        else:
            print("------------------BAD INPUT--------------------")
            self.solveFor()