#include "Binomial.h"
#include <stdio.h>
#include <iostream>
using namespace B;
using namespace std;

void header()
{
    cout << "--------------------------------------------\n";
    cout << "|          Probability Calculator          |\n";
    cout << "|   By invertedegg (github.com/invertedegg)|\n";
    cout << "--------------------------------------------\n\n";
}

int chooseDistribution()
{
    int c;

    cout << "Please choose a distribution to calculate.\nBinomial: 1\nNegative Binomial: 2\n" << endl;
    cin >> c;
    return c;
}

int main()
{
    Binomial bd;
    int choice;
    
    header();

    bd.wasChosen();

    choice = chooseDistribution();
    switch(choice)
    {
        case 1:
            cout << "you chose binomial";
            break;
        case 2:
            cout << "you chose negative binomial";
            break;
    }
    return 0;
}