#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
     int inputC;
     cout << "Enter a value (Celsius to Fahrenheit): ";
     cin >> inputC;
     cout << "Celsius" << setw(15) << "Fahrenheit"
          << "\n"
          << endl;

     for (int i = inputC; i <= inputC + 20; i++)
     {

          cout << i << setw(15) << setprecision(2) << fixed << i * (9.0 / 5.0) + 32.0 << "\n"
               << endl;
     }

     int inputF;
     cout << "Enter a value (Fahrenheit to Celsius): ";
     cin >> inputF;
     cout << "Fahrenheit" << setw(15) << "Celsius"
          << "\n"
          << endl;

     for (int i = inputF; i <= inputF + 20; i++)
     {

          cout << i << setw(15) << setprecision(2) << fixed << (i - 32.0) * 5.0 / 9.0 << "\n"
               << endl;
     }

     return 0;
}