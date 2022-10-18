#include <iostream>
using namespace std;

class Triangle
{

private:
    // declare the three side of a triangle
    double sideA;
    double sideB;
    double sideC;

public:
    // sets values to the private data members of the triangle class

    // set first side
    void setSideA(double A)
    {
        this->sideA = A;
    }

    // set second side
    void setSideB(double B)
    {
        this->sideB = B;
    }

    // set third side
    void setSideC(double C)
    {
        this->sideC = C;
    }

    // returns values of the private data members of the triangle class

    // return first side
    double getSideA()
    {
        return sideA;
    }

    // return second side
    double getSideB()
    {
        return sideB;
    }

    // return third side
    double getSideC()
    {
        return sideC;
    }
};

int main()
{
    // declare a side of triangle
    double A;
    double B;
    double C;
    cout << "Enter A and B and C values : ";
    // take a side from the user
    cin >> A >> B >> C;

    // creating a instance of class Triangle
    Triangle obj;
    // set the value through setter methods
    obj.setSideA(A);
    obj.setSideB(B);
    obj.setSideC(C);
    // print the output through the getter methods
    cout << "The A and B and C values are " << obj.getSideA() << " and " << obj.getSideB() << " and " << obj.getSideC() << endl;

    return 0;
}