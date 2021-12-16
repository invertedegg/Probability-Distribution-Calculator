# This is a program that calculates probabilities,
# printing them to the command line. This file
# is the main file to be executed.
import Binomial, NegativeBinomial

B = Binomial.Binomial()

def Binomial():
    solveFor = B.solveFor()
    print("-----------------------------------------------")

    n , x, p = '', '', ''
    while n == '':
        n = int(input("Enter # of trials: "))
    while x == '': 
        x = int(input("Enter # of successes: "))
    while p == '':
        p = float(input("Enter probability of success: "))
    ans = B.findProbability(x, n, p, solveFor);
    return ans

def NegBinomial():
    D = NegativeBinomial();
    solveFor = D.solveFor


def printHeader():
    print("-----------------------------------------------\n"
          "|           Probability Calculator            |\n"
          "|   By invertedegg (github.com/invertedegg)   |\n"
          "-----------------------------------------------\n\n")

def getChoice(a):
    if a == 0:
        choice = input("Binomial: 1\nNegative Binomial: 2\nQuit: 0\nPlease select distribution to calculate from: ")
    else:
        choice = input("\nBinomial: 1\nNegative Binomial: "
                       "2\nQuit: 0\nPlease select another distribution to calculate from: ")
    return choice

def main():
    printHeader()
    choice = int(getChoice(0))
    print("-----------------------------------------------")
    while choice != 0:
        if choice == 1:
            ans = Binomial()
        elif choice == 2:
            ans = NegBinomial()
        
        print("\nAnswer: " + "{:0.5f}".format(ans))
        print("-----------------------------------------------")
        choice = int(getChoice(1))
    print("Thank you! Exiting...")


if __name__ == '__main__':
    main()
