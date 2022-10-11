#include <iostream>
using namespace std;

class Deer
{
public:
    Deer(int ageValue, int weightValue);
    void Print();

private:
    int age;
    int weight;
};
Deer::Deer(int ageValue, int weightValue)
{
    age = ageValue;
    weight = weightValue;
}
void Deer::Print()
{
    cout << "Deer's age: " << age << endl;
    cout << "Deer's weight: " << weight << endl;
}

int main()
{
    Deer *myDeer = nullptr;
    int ageValue;
    int weightValue;

    cin >> ageValue;
    cin >> weightValue;

    /* Your code goes here */
    myDeer = new Deer(ageValue, weightValue);

    myDeer->Print();

    return 0;
}