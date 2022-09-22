// Miguel Madrigal
// 7-27-2022
// This program demonstrates accessor and mutation usage using People and customer data.
// Mailing list can be set to true or false and thus represent 1 and 0, respectively.
#include <iostream>
#include <string>
using namespace std;

class PersonData
{
private:
    string city;
    string state;
    int zip;
    string phone;
    string lastName;
    string firstName;
    string address;

public:
    // constructors
    PersonData()
    {
        city = "";
        state = "";
        zip = 0;
        phone = "";
        lastName = "";
        firstName = "";
        address = "";
    }

    PersonData(string Lname, string Fname, string add, string c, string s, int z, string ph)
    {
        city = c;
        state = s;
        zip = z;
        phone = ph;
        lastName = Lname;
        firstName = Fname;
        address = add;
    }

    // mutator functions
    void setLastName(string Lname)
    {
        lastName = Lname;
    }

    void setFirstName(string Fname)
    {
        firstName = Fname;
    }

    void setAddress(string add)
    {
        address = add;
    }

    void setCity(string c)
    {
        city = c;
    }

    void setState(string s)
    {
        state = s;
    }

    void setZip(int z)
    {
        zip = z;
    }

    void setPhone(string ph)
    {
        phone = ph;
    }

    // accessor functions
    string getLastName() const
    {
        return lastName;
    }

    string getFirstName() const
    {
        return firstName;
    }

    string getState() const
    {
        return state;
    }

    int getZip() const
    {
        return zip;
    }

    string getPhone() const
    {
        return phone;
    }

    string getAddress() const
    {
        return address;
    }

    string getCity() const
    {
        return city;
    }

    // display functions
    void displayPersonData() const
    {
        cout << "Last Name:\t\t" << getLastName() << endl;
        cout << "First Name:\t\t" << getFirstName() << endl;
        cout << "Address:\t\t" << getAddress() << endl;
        cout << "City:\t\t\t" << getCity() << endl;
        cout << "State:\t\t\t" << getState() << endl;
        cout << "Zip:\t\t\t" << getZip() << endl;
        cout << "Phone:\t\t\t" << getPhone() << endl;
    }
};

// CustomerData class Which is derived from PersonData class
class CustomerData : public PersonData
{
private:
    int customerNumber;
    bool mailingList;

public:
    // constructors
    CustomerData() : PersonData()
    {
        customerNumber = 0;
        mailingList = false;
    }

    CustomerData(int num, bool mail, string Lname, string Fname, string add, string c, string s, int z, string ph) : PersonData(Lname, Fname, add, c, s, z, ph)
    {
        customerNumber = num;
        mailingList = mail;
    }

    // mutator functions
    void setCustomerNumber(int num)
    {
        customerNumber = num;
    }

    void setMailingList(bool mail)
    {
        mailingList = mail;
    }

    // accessor functions
    int getCustomerNumber() const
    {
        return customerNumber;
    }

    bool getMailingList() const
    {
        return mailingList;
    }

    // display functions
    void displayCustomerData() const
    {
        displayPersonData();
        cout << "Customer Number:\t" << getCustomerNumber() << endl;
        cout << "Mailing List:\t\t" << getMailingList() << endl;
    }
};

int main()
{
    // set True to False they represent 1 or 0, respectively.
    CustomerData miguel(112, true, "Madrigal", "Miguel", "3326 N Natchez Ave", "Chicago", "IL", 60634, "(312) 477-9427");
    miguel.displayCustomerData();

    return 0;
}
// Miguel Madrigal