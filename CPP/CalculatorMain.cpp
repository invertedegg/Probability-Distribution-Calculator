#include "Binomial.h"
#include <stdio.h>
#include <iostream>
using namespace B;
using namespace std;

void header()
{
    printf("--------------------------------------------\n|          Probability Calculator          |\n|   By invertedegg (github.com/invertedegg)|\n--------------------------------------------\n\n");
}

int chooseDistribution()
{
    int c = 50;

    while(c > 2 || c < 0)
    {
        cout << "Please choose a distribution to calculate.\nBinomial: 1\nNegative Binomial: 2\nExit: 0" << endl;
        cin >> c;
    }
    printf("--------------------------------------------\n");
    return c;
}

int chooseAnswer1()
{
    int c = 50;
    while (c > 2 || c < 0)
    {
        cout << "Please choose which condition you are solving for.\nExact Probability: 1\nCumulative Probability: 2" << endl;
        cin >> c;
    }
    printf("--------------------------------------------\n");
    return c;
}

int main()
{
    int choice = 12;
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
                printf("you chose negative binomial");
                break;
        }

        printf("\nAnswer: %f\n--------------------------------------------\n", ans);

        choice = chooseDistribution();
    }
    return 0;
}