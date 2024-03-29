// Write and run the tests for the individual problems one at a time.
//
#include <iostream>
#include <iomanip> // needed for setw() and setfill()
using namespace std;

// -----------------------------------------------------------------------------------------------------
// Use cin in C++ to read in an integer input from the user.
// Then use cout in C++ to display the corresponding number of lines,
// each line containing a single asterisk (*).
//
// Running this problem for one possible input should look like:
//    Enter a number: 5
//    *
//    *
//    *
//    *
//    *
//
void problem1()
{
    int n;
    int num = 1;
    cout << "Enter a number: ";

    cin >> n;
    // cin >> num;
    //  Outer loop to handle number of rows
    //  n in this case
    for (int i = 0; i < n; i++)
    {
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++)
            cout << num << " ";

        // Incrementing number at each column
        num = num + 1;

        // Ending line after each row
        cout << endl;
    }

} // end problem1()

// -----------------------------------------------------------------------------------------------------
// Building off of Problem 1, use the setw() function to format the output
// depending on the number provided through user input.
// The number of spaces before each asterisk should be the same as the number given by the user.
//
// Running this problem for one possible input should look like:
//    Enter a number: 3
//       *
//       *
//       *
//
void problem2()
{
    int n;
    int num = 1;
    cout << "Enter a number: ";
    cin >> n;
    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++)
    {

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++)
        {

            // Printing number
            cout << num << " ";

            // Incrementing number at each column
            num = num + 1;
        }

        // Ending line after each row
        cout << endl;
    }
} // end problem2()

// -----------------------------------------------------------------------------------------------------
// Given a number that the user enters via input, display the same number of rows,
// with the first row containing one asterisk (*), the second row containing two asterisks, etc.
//
// Running this problem for one possible input should look like:
//    Enter a number: 4
//    *
//    **
//    ***
//    ****
//
void problem3()
{
    int n;
    cin >>
        n;
    int i = 0, j = 0, k = 0;
    while (i < n)
    {

        // for number of spaces
        while (k < (n - i - 1))
        {
            cout << "  ";
            k++;
        }

        // resetting k because we want to run k from
        // beginning.
        k = 0;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }

        // resetting k so as it can start from 0.
        j = 0;
        i++;
        cout << endl;
    }
}

// end problem3()

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