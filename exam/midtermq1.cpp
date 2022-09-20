#include <iostream>

using namespace std;
int a = 3, b = 6, c = 9; // global
void confuse1(int a, int &b)
{
    c = a + b++;
    cout << c << endl;
}
void confuseDriver()
{
    cout << c << endl;

    int a = 2, c = 3;
    confuse1(b, c);
    cout << a << endl;
    cout << b << endl;

    cout << c << endl;

    cout << a + b + c;
}

int main()
{
    confuseDriver();
}