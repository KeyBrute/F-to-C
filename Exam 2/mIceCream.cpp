/*

 CS 141 Midterm #2, Fall 2022
 Professor Kidane and Professor Riazi

 This midterm exam consists of a single problem.  All points
 come from your solution passing tests in Zybooks.

 You may not communicate with anyone else during the test. You may
 consult your text, your notes, files archived in your account, and
 the Web, but you may not use text messages, phone calls, chat or any
 sort of messaging service.

 You don't need to comment your code or worry about having meaningful
 variable names.  We will only be grading the output of your program.

 You may assume perfect input (i.e. no error checking is necessary)
 unless we specifically state otherwise.

*/

#include <iostream>
#include <vector>
using namespace std;

// TODO: Your code here
// Write code here to make main() work and run as intended.
struct IceCreamOrder
{
    string flavor;
    double numScoops;
};

void display(const IceCreamOrder &p)
{
    cout << p.flavor << " ice cream with " << p.numScoops << " scoops has been ordered" << endl;
}
void priceOfOrder(const IceCreamOrder &p, double rate)
{
    double tax = p.numScoops * rate;
    cout << p.numScoops << " scoops of " << p.flavor << " will cost: $" << tax << " (no tax included)." << endl;
}

void displayPopularIceCream(vector<IceCreamOrder> &professions)
{
    int max = 0;
    for (int ii = 0; ii < professions.size(); ii++)
    {
        if (professions[max].numScoops < professions[ii].numScoops)
            max = ii;
    }
    cout << "The flavor of the order with the most number of scoops is: " << professions[max].flavor << endl;
}

int main()
{

    struct IceCreamOrder orderOne;
    orderOne.flavor = "Rocky Road";
    orderOne.numScoops = 4;

    cout << orderOne.flavor << " ice cream with " << orderOne.numScoops << " scoops has been ordered" << endl;

    struct IceCreamOrder orderTwo;
    cout << "Enter an ice cream flavor and the number of scoops (e.g. chocolate 3): ";
    cin >> orderTwo.flavor >> orderTwo.numScoops;
    display(orderTwo);

    priceOfOrder(orderOne, 4.99);
    priceOfOrder(orderTwo, 2.39);

    struct IceCreamOrder orderThree;
    orderThree.flavor = "Mint Chocolate Chip";
    orderThree.numScoops = 5;

    vector<IceCreamOrder> iceCreamContest;
    iceCreamContest.push_back(orderOne);
    iceCreamContest.push_back(orderTwo);
    iceCreamContest.push_back(orderThree);

    displayPopularIceCream(iceCreamContest);

    return 0;
} // end main()