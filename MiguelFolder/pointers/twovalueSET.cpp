// xValue and yValue are read from input.
// Declare and assign pointer myHorse with a new
//  Horse object. Then, set myHorse's age and
// weight to xValue and yValue, respectively.

#include <iostream>
using namespace std;

class Horse
{
public:
    Horse();
    void Print();

    int age;
    int weight;
};
Horse::Horse()
{
    age = 0;
    weight = 0;
}
void Horse::Print()
{
    cout << "Horse's age: " << age << endl;
    cout << "Horse's weight: " << weight << endl;
}

int main()
{
    int xValue;
    int yValue;

    /* Additional variable declarations go here */

    cin >> xValue;
    cin >> yValue;

    /* Your code goes here */
    Horse *myHorse = new Horse();

    myHorse->age = xValue;
    myHorse->weight = yValue;

    myHorse->Print();

    return 0;
    Deer *myDeers = nullptr;
    int count;
    int i;

    cout << "Enter the number of ball objects:";
    cin >> count;

    Deer store[count]; // an array to store the Deers

    for (i = 0; i < count; i++)
    {
        myDeers = &store[i];
        myDeers->Read();
        myDeers->Print();
    }

    return 0;
}

Coordinates obj;
Coordinates *myCoordinates=&obj;
myCoordinates->age=xValue;
myCoordinates->weight=yValue;
myCoordinates->Print();