#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    string lastname;
    int age;
    int creditHours;
    int uin;

public:
    Person(string fn = "miguel", string ln = "Madrigal", int a = 20, int cr = 120, int UIN = 0)
    {
        setName(fn);
        setLastName(ln);
        setAge(a);
        setCredits(cr);
        setUIN(UIN);
    }
    void display()
    {
        // cout << name << ", " << age << " " << lastname << " " << creditHours<< " " << uin;
        cout << "My name is " << name << " " << lastname << endl;
        cout << "I am " << age << " years old." << endl;
        cout << "My UIN is " << uin << endl;

        cout << "I have taken " << creditHours << " credit hours" << endl;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setName(string fn)
    {
        name = fn;
    }
    void setLastName(string ln)
    {
        lastname = ln;
    }
    void setCredits(int cr)
    {
        creditHours = cr;
    }
    void setUIN(int UIN)
    {
        UIN = UIN;
    }
    string getName()
    {
        return name;
    }
    string lastName()
    {
        return lastname;
    }
    int getCredit()
    {
        return creditHours;
    }

    int getUIN()
    {
        return uin;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    cout << "Please input the new students first name, last name, age, credit hours and UIN, separated by a space" << endl;
    int age, credits, UIN;
    string firstname, lastname;
    Person me;
    me.display();
    cout << endl;
    Person me2;
    cin >> firstname >> lastname >> age >> credits >> UIN;
    me2.setName(firstname);
    me2.setLastName(lastname);
    me2.setAge(age);
    me2.setUIN(UIN);
    me2.setCredits(credits);

    me2.display();
    return 0;
}