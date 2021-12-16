# This Python file contains all of the computation
# needed to find the probability of Binomial distributions
import math
import Combination

def findProbability(x, n, p):
    return Combination.calculateCombination(n, x) * math.pow(p, x) * math.pow((1 - p), (n - x))
