#include <iostream>
#include <string>
using namespace std;

int main()
{
    string birthLocation;
    string birthState;

    getline(cin, birthLocation);
    getline(cin, birthState);

    /* Your code goes here */
    birthLocation.append(", ");
    birthLocation.append(birthState);

    cout << birthLocation << endl;

    return 0;
}