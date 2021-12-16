# This is a program that calculates probabilities,
# printing them to the command line. This file
# is the main file to be executed.
import Binomial

def Binomial():
    x = input("Enter # of successes: ")
    n = input("Enter # of trials: ")
    p = input("Enter probability of success")
    ansp = input("Enter probability of X (enter if calculating for")




def printHeader():
    print("-----------------------------------------------\n"
          "|          Probability Calculator             |\n"
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
    print("\n-----------------------------------------------")
    while choice is not 0:
        if choice == 1:
            Binomial()
        choice = int(getChoice(1))
    print("Thank you! Exiting...")


if __name__ == '__main__':
    main()
