
#include <iostream>
using namespace std;

class Person
{
public:
    void SetFirstName(string firstNameToSet);
    void SetLastName(string lastNameToSet);
    string GetFullName() const;

private:
    string first;
    string last;
};

void Person::SetFirstName(string firstNameToSet)
{
    first = firstNameToSet;
}

void Person::SetLastName(string lastNameToSet)
{
    last = lastNameToSet;
}

string Person::GetFullName() const
{
    return first + "_" + last;
}

int main()
{
    string firstName;
    string lastName;

    firstName = "Sam";
    lastName = "Wayne";

    Person person1;

    person1.SetFirstName(firstName);
    person1.SetLastName(lastName);

    cout << person1.GetFullName();

    return 0;
}