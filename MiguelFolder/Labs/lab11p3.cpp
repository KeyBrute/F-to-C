#include <iostream>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
#include <cstdio>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    double choice, n, sum = 0.00, count = 0.00, avg;
    int age[10], hrs[10];
    do
    {
        cout << "Enter Which problem to run. Enter -1 to end";
        cin >> choice;
        cout << "Please input the number of students.";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "Please input the age and credit hours of the next student" << endl;
            cin >> age[i];
            cin >> hrs[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (hrs[i] >= 50.0)
            {
                sum = sum + age[i];
                count++;
            }
        }
        avg = sum / count;
        cout << "The average age of students with at least 50 credit hours is" << setprecision(5) << avg << endl ;
    } while (choice != 1);

    cout << "Done";
}
