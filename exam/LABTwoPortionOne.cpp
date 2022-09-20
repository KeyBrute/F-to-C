#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "Enter a character : ";
    cin >> x;
    int n;
    cout << "enter how many : ";
    cin >> n;
    char arr[n];
    cout << "Enter the sequence of " << n << " characters ";

    int i = 1;
    while (i < n)
    {

        ++i;
        cin >> arr[i];
    }

    int before = 0;
    int after = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            after++;
        }
        else
        {
            before++;
        }
    }
    cout << "There are " << after << " letters before " << x << " and " << before << " letters after " << x;
    return 0;
    // char x;
    // cout<<"Enter a character : ";
    // cin>>x;
    // int n;
    // cout<<"enter how many : ";
    // cin>>n;
    // char arr[n];
    // cout<<"Enter the sequence of "<<n<<" characters ";
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // int before = 0;
    // int after = 0;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]>x)
    //     {
    //         after++;
    //     }
    //     else
    //     {
    //         before++;
    //     }
    // }
    // cout<<"There are "<<before<<" letter before "<<x<<" and "<<after<<" letter after "<<x;
    // return 0;

    // #include <bits/stdc++.h>
    //     using namespace std;

    //     // main function
    //     int main()
    //     {
    //         // declaration of two char variable first and seond
    //         char first, second;

    //         // declaration of two int variable n and count
    //         int n, count = 0;

    //         // print statement
    //         cout << "Enter two characters: ";

    //         // read two characters from user and store in first and second char variable
    //         cin >> first >> second;

    //         // print statement
    //         cout << "Enter how many: ";

    //         // read how many characters from user
    //         cin >> n;

    //         // print statement
    //         cout << "Enter a sequence of " << n << " characters: ";
    //         for (int i = 0; i < n; i++)
    //         {
    //             // declaration of char variable third
    //             char third;

    //             // read characters from user
    //             cin >> third;

    //             // conditional statement
    //             if (int(first) < int(third) && int(third) < int(second))
    //             {
    //                 count++;
    //             }
    //         }

    //         // print the total cout
    //         cout << "There are " << count << " characters in the sequence that are between " << first << " and " << second << " (not inclusive).";

    //         // return statement
    //         return 0;
    //     }
}