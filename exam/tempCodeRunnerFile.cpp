#include <iostream>

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