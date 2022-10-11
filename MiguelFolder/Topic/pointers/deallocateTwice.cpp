#include <iostream>
using namespace std;

// Read an integer as the number of Deer objects. Assign myDeer with an array of that many Deer objects. For each object, call object's Read() followed by the object's Print().

// Ex: If the input is 2 4 113 3 100, then the output is:

// Deer's age: 4
// Deer's weight: 113
// Deer's age: 3
// Deer's weight: 100
// Deer with age 3 and weight 100 is deallocated.
// Deer with age 4 and weight 113 is deallocated.

class Deer
{
public:
    Deer();
    void Read();
    void Print();
    ~Deer();

private:
    int age;
    int weight;
};
Deer::Deer()
{
    age = 0;
    weight = 0;
}
void Deer::Read()
{
    cin >> age;
    cin >> weight;
}
void Deer::Print()
{
    cout << "Deer's age: " << age << endl;
    cout << "Deer's weight: " << weight << endl;
}
Deer::~Deer()
{ // Covered in section on Destructors.
    cout << "Deer with age " << age << " and weight " << weight << " is deallocated." << endl;
}

int main()
{
    Deer *myDeer = nullptr;
    int count;
    int i;

    /* Your code goes here */

    cin >> count;

    myDeer = new Deer[count]; // an array to store the Deers

    for (i = 0; i < count; i++)
    {
        myDeer[i].Read();
        myDeer[i].Print();
    }

    delete[] myDeer;

    return 0;
}