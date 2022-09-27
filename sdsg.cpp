#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // initialize a vector
    vector<int> vec;
    int num;

    // user input for number until 0
    do
    {
        cin >> num;

        // if number is 0 then break, otherwise push it in vector
        if (num == 0)
            break;
        else
            vec.push_back(num);
    } while (true);

    int LE = vec.back();

    if (LE % 2 != 0)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (i % 2 != 0)
                cout << vec[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (i % 2 == 0)
                cout << vec[i] << endl;
        }
    }
    return 0;
}