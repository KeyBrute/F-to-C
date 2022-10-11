#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    unsigned int i;

    cin >> password;

    /* Your code goes here */
    for (i = 0; i < password.length(); i++)
    {
        if (!isalpha(password.at(i)) && !isdigit(password.at(i)))
        {
            password[i] = 'x';
        }
    }

    cout << "Updated password: " << password << endl;

    return 0;
}