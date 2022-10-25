#include <iostream>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
#include <cstdio>
#include <string.h>
#include <cstring>
using namespace std;

int a = 4, b = 8, c = 10; // global
void confuse1(int &b, int c)
{
   b = ++b + c++;
}
int main()
{
   int b = 2, c = 5;
   confuse1(a, b);
   cout << a + b + c;
}