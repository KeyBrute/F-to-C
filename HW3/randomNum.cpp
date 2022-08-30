#include <iostream>
#include <cstdlib> // Enables use of rand()
using namespace std;

int main()
{
    int seedVal;

    cin >> seedVal;

    /* Your solution goes here  */
    srand(seedVal);

    cout << rand() % 10 << endl;

    cout << rand() % 10 << endl;

    return 0;
}