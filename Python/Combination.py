# This Python file calculates Combinations,
# given two integer values
import math

# Calculates the combination of values
# from a set "a" into a subset "b"
def calculateCombination(a, b):
    return math.factorial(a) / (math.factorial(b) * (math.factorial(a - b)))

