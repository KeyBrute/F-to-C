/*
 CS 141 Midterm #2, Fall 2022
 Professor Kidane and Professor Riazi

 This midterm exam consists of a single problem.  All points 
 come from your solution passing tests in Zybooks.

 You may not communicate with anyone else during the test. You may
 consult your text, your notes, files archived in your account, and 
 the Web, but you may not use text messages, phone calls, chat or any
 sort of messaging service.

 You don't need to comment your code or worry about having meaningful 
 variable names.  We will only be grading the output of your program.  

 You may assume perfect input (i.e. no error checking is necessary) 
 unless we specifically state otherwise.
*/

/* Running the program looks like the following:
            Software Engineer makes $100000
            Cashier makes $29297
            As a Software Engineer, you are expected to pay $30000 in taxes.
            As a Cashier, you are expected to pay $4394.55 in taxes.
            The profession with the highest salary is: Nurse Practitioner
*/

#include <iostream>
#include <vector>

using namespace std;

struct Profession
{
    string title;
    double yearlySalary;
};

void display(const Profession &p)
{
    cout << p.title << " makes " << p.yearlySalary << endl;
}
void calculateTaxesDue(const Profession &p, double rate)
{
    double tax = p.yearlySalary * rate;
    cout << "As a " << p.title << ", you are expected to pay $" << tax << " in taxes." << endl;
}

void findBestJob(vector<Profession> &professions)
{
    int max = 0;
    for (int ii = 0; ii < professions.size(); ii++)
    {
        if (professions[max].yearlySalary < professions[ii].yearlySalary)
            max = ii;
    }
    cout << "The profession with the highest salary is: " << professions[max].title << endl;
}

int main()
{
    struct Profession softwareEngineer;
    softwareEngineer.title = "Software Engineer";
    softwareEngineer.yearlySalary = 100000;
    cout << softwareEngineer.title << " makes $" << softwareEngineer.yearlySalary << endl;

    struct Profession cashier;
    cashier.title = "Cashier";
    cashier.yearlySalary = 29297;
    display(cashier);

    calculateTaxesDue(softwareEngineer, 0.3);
    calculateTaxesDue(cashier, 0.15);

    struct Profession nursePrac;
    nursePrac.title = "Nurse Practitioner";
    nursePrac.yearlySalary = 111680;

    vector<Profession> jobs;
    jobs.push_back(softwareEngineer);
    jobs.push_back(cashier);
    jobs.push_back(nursePrac);

    findBestJob(jobs);

    return 0;
} // end main()