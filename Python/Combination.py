# This Python file calculates Combinations,
# given two integer values
import math

def calculateCombination(a, b):
    return math.factorial(a) / (math.factorial(b) * (math.factorial(a - b)))

