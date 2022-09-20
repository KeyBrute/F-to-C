#include <iostream>
using namespace std;

void PrintProductPrice(string var1, int var2)
{
    cout << "One " << var1 << " costs " << var2 << " dollars." << endl;
}

int main()
{
    int one, two;
    string a, b;
    cin >> a >> b;

    cin >> one >> two;
    PrintProductPrice(a, one);

    PrintProductPrice(b, two);

    return 0;
}