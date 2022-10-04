#include <iostream>
using namespace std;

void symmetric(int arr[], int n)
{
    int flag = 0;

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {

        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "The array is not symmetric";
    else
        cout << "The array is symmetric";
}

int main()
{
    int NUM_ELEMENTS;

    cout << "Enter array size: ";
    cin >> NUM_ELEMENTS;
    int arr[NUM_ELEMENTS];

    int i;
    cout << "Enter array elements: ";
    for (i = 0; i < NUM_ELEMENTS; ++i)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    symmetric(arr, n);
    return 0;
}