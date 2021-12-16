#include "Binomial.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>
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

    cout << "Please choose a distribution to calculate.\nBinomial: 1\nNegative Binomial: 2\nExit: 0" << endl;
    cin >> c;
    cout <<  "\n--------------------------------------------" << endl;
    return c;
}

int chooseAnswer1()
{
    int c;

    cout << "Please choose which condition you are solving for.\nExact Probability: 1\nCumulative Probability: 2" << endl;
    cin >> c;
    cout <<  "\n--------------------------------------------" << endl;
    return c;
}

int main()
{
    int choice;
    int  x;
    int n;
    double p;
    double ans;
    bool t;
    
    header();
    choice = chooseDistribution();

    while(choice != 0)
    {
        switch(choice)
        {
            case 1:
            Binomial bd;
            
            choice = chooseAnswer1();
            switch (choice)
            {
            case 1:
                cout << "# of trials (n): ";
                cin >> n;
                cout << "# of Successes (x): ";
                cin >> x;
                cout << "Probability of Success (p): ";
                cin >> p;
                
                ans = bd.calculateProbability(x, n, p);
                break;
            case 2:
                cout << "# of trials (n): ";
                cin >> n;
                cout << "# of Successes (x): ";
                cin >> x;
                cout << "Probability of Success (p): ";
                cin >> p;
                cout << "Cumulative Type (1 for P(X >= x), 0 for P(X <= x)):";
                cin >> t;

                    ans = bd.cumulativeProbability(x, n, p, t);
                default:
                    break;
                }
                break;

            case 2:
                cout << "you chose negative binomial";
                break;
        }

        cout << "\nAnswer:" << fixed << setprecision(2) << ans << "\n--------------------------------------------" << endl;

        choice = chooseDistribution();
    }
    return 0;
}