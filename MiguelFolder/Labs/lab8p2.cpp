#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include <string.h>
#include <cstring>

using namespace std;
// function definition
double calculatePercentages(string string1)
{
    double n = string1.length();
    double h = 0, t = 0;

    for (double i = 0; i < n; i++)
    {
        if (string1[i] == 'H')
            h++;
    }
    double hPerc = h * 100 / n;
    double tPerc = 100 - hPerc;
    cout << "Heads percentage is: " << fixed << setprecision(2) << hPerc << " and Tails percentage is: " << fixed << setprecision(2) << tPerc << endl;
    return hPerc;
}

int main(int argc, char *argv[])
{
    // declaring string
    string sname;
    cout << "Enter the string: " << endl;
    cin >> sname;

    // calling getVowels function
    calculatePercentages(sname);
}