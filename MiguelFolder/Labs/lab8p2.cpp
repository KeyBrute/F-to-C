// Lab 8, CS 141, Fall 2022
// Write and run the tests for the individual problems one at a time.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
#include <cstdio>
#include <string.h>
#include <cstring>

using namespace std;

// -----------------------------------------------------------------------------------------------------

/*

    Problem 1

    Given a string, retrieve the vowels from it. You need to write a function getVowels() that gets all the vowels from the given string. 
    This function should be called in problem1() to recieve full credit.

    When input is:
    1 Hi how are you

    The output should be:
    The vowels in the string are: ioaeou
    
    Explanation: In the string "Hi how are you", there are 6 vowels i.e., i, o, a, e, o, u. Therefore, string ioaeou is printed.

*/

void getVowels(string sname)
{
   for (int i = 0; i < sname.length(); i++){
      if (sname[i] == 'a' or sname[i] == 'e' or sname[i] == 'i' or sname[i] == 'o' or sname[i] == 'u' or sname[i] == 'A' or sname[i] == 'E' or sname[i] == 'I' or sname[i] == 'O' or sname[i] == 'U'){
         cout << sname[i];
      }
   }
}


void problem1()
{

   string sname;
   cout << "Enter the string: " << endl;
   cin >> sname;
   cout << "The vowels in the string are:" << endl;
   getVowels(sname);

} // end problem1()

// -----------------------------------------------------------------------------------------------------

/*

    Problem 2
    Take a string as an input and call the calculatePercentage() function
    and calculate percentages of 'H' and 'T' in the given string.

    When input is:
    2 HTTHHHTTHTHTTHTHTHTHTHT

    The output should be:
    Heads percentage is 47.83 and Tails percentage is 52.17

*/

int calculatePercentages(string string1){
   double n = string1.length();
   double h = 0, t = 0;
   
   for (int i = 0; i < n; i++){
      if (string1[i] == 'H')
         h++;
   }
   double hPerc = h * 100 / n;
   double tPerc = 100 - hPerc;
   cout << "Heads percentage is " << setprecision(4) << hPerc << " and Tails percentage is " << setprecision(4) << tPerc << endl;
   return hPerc;
}

void problem2()
{
   string sname;
   cout << "Enter the string: " << endl;
   cin >> sname;
   
   calculatePercentages(sname);
} // end problem2()

// -----------------------------------------------------------------------------------------------------

/*

    Problem 3 - Extra Credit

    Given an array of integers. Find the string equivalent of the numbers in the array.

    When the input is
    3 6
    1 2 3 28 30 55

    Output should be:
    abcbdc

*/

void problem3()
{

    /* Write your code here for Problem 3. Take inputs for the size of the array, and the elements
       in the array, and call the numToAlph() function. */

       // numToAlph(); //Please uncomment after you define the function

       /* Implement this function above problem3() and call it within problem 3 to receive full credit,
          you should figure out what parameters to pass as arguments to the function.
       */

} // end problem3()

int main()
{

    // You should not change the code below this point.
    // All your changes should be inside the individual functions shown above.

    int menuOption = 0;

    cout << "Enter which problem to run: ";
    cin >> menuOption;
    switch (menuOption)
    {
    case 1:
        problem1();
        break;
    case 2:
        problem2();
        break;
    case 3:
        problem3();
        break;
    }

    cout << "Done." << endl;
    return 0;

} // end main()