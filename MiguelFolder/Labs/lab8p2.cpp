#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include <string.h>
#include <cstring>
//#include <iomanip>

using namespace std;
// function definition
double calculatePercentages(string string1)
{
    double x = string1.length();
    double y = 0, z = 0;

    for (double i = 0; i < x; i++)
    {
        if (string1[i] == 'H')
            y++;
    }
    double hPerc = y * 100 / x;
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
