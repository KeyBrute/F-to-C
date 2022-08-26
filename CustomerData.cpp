
#include <iostream>
using namespace std;
class CustomerData
{
private:
    int customerNumber;
    bool mailingList;

public:
    int getCustomerNumber()
    {
        return customerNumber;
    }
    void setCustomerNumber(int customerNumber)
    {
        customerNumber = customerNumber;
    }
    bool getMailingList()
    {
        return mailingList;
    }
    void setMailingList(bool mailingList)
    {
        mailingList = mailingList;
    }
};
int main()
{
    CustomerData cd;
    return 0;
}