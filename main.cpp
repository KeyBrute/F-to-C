#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
     int inputEquation;

     cout << "Enter a value (CtoF and FtoC): ";
     cin >> inputEquation;
     cout << "Number" << setw(15) << "CtoF" << setw(15) << "FtoC"
          << "\n";
     cout << "----------------------------------------------------"
          << "\n"
          << "\n";

     for (int i = inputEquation; i <= inputEquation + 20; i++)
     {

          cout << i << setw(15) << setprecision(2) << fixed << i * (9.0 / 5.0) + 32.0 << setw(15) << setprecision(2) << fixed << (i - 32.0) * 5.0 / 9.0 << "\n"
               << endl;
     }

     return 0;
}