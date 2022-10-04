#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int yearsList;
    vector<int> yearsList(3);
    yearsList.at(0) = 5;
    yearsList.at(1) = yearsList.at(0);
    yearsList.at(0) = 10;
    yearsList.at(2) = yearsList.at(1);
    cout << yearsList << endl;

    return 0;
}