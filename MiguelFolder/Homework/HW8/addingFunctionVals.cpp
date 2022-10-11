#include <iostream>
using namespace std;

int ComputeVal(int &one, int &two)
{
    int product = one * two - 7;
    return product;
}
int main()
{
    int input1, input2;
    int result;

    cin >> input1;
    cin >> input2;

    result = ComputeVal(input1, input2);

    cout << result << endl;

    return 0;
}