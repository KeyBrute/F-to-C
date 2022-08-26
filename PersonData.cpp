#include <iostream>
using namespace std;
class PersonData
{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    int phone;

public:
    string getLastName()
    {
        return lastName;
    }
    void setLastName(string lastName)
    {
        lastName = lastName;
    }
    string getFirstName()
    {
        return firstName;
    }
    void setFirstName(string firstName)
    {
        firstName = firstName;
    }
    string getAddress()
    {
        return address;
    }
    void setAddress(string address)
    {
        address = address;
    }
    string getCity()
    {
        return city;
    }
    void setCity(string city)
    {
        city = city;
    }
    string getState()
    {
        return state;
    }
    void setState(string state)
    {
        state = state;
    }
    int getZip()
    {
        return zip;
    }
    void setZip(int zip)
    {
        zip = zip;
    }
    int getPhone()
    {
        return phone;
    }
    void setPhone(int phone)
    {
        phone = phone;
    }
};
int main()
{
    PersonData pd;
    return 0;
}
