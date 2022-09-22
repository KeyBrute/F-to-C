// #include <iostream>

// using namespace std;

// int main()
// {
//     int num1, num2, n; // declaring the variables
//     cout << "Enter two number : ";
//     cin >> num1 >> num2;
//     cout << "enter how many : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter sequence of " << n << " numbers ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i] % num1 == 0 && arr[i] % num2 != 0) || (arr[i] % num1 != 0 && arr[i] % num2 == 0))
//         {
//             cout << arr[i] << " ";
//             x++; // counting the numbers satisfying the condition
//         }
//     }
//     cout << "\n These are total " << x << " numbers are sequentially devisible by " << num1 << " and " << num2;

#include <iostream>

using namespace std;

int main()
{

    // TODO: Your code here
    int a, b, x;
    int countNum;
    int count = 0;

    // store the 2 numbers as and b
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // store the count
    cout << "Enter how many: ";
    cin >> count;

    cout << "Enter a sequence of " << count << " numbers: ";

    // read each number from user
    for (int num = 1; num <= count; num++)
    {
        cin >> x; // input number

        // check if a divides but not b
        if (x % a == 0 && x % b != 0)
            countNum++;
        // check if b divides but not a
        else if (x % b == 0 && x % a != 0)
            countNum++;
    }

    // print the countNum
    cout << "There are " << countNum << " numbers in the sequence evenly "
         << "divisible by either " << a << " or " << b << ", but not both.\n";

    return 0;
}