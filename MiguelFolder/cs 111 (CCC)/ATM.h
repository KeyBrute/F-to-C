// Miguel Madrigal

#include <iostream>
#include <string>
using namespace std;

double withdraw, startBalance, deposit;

int selection, y;
string x;

class Usercredentials
{                    // The class
public:              // Access specifier
    string userName; // Attribute
    int password;    // Attribute
    Usercredentials(string x, int y)
    { // Constructor named Usercredentials with parameters string and int as Username
      // and password, respectively.
        userName = x;
        password = y;
    }
};

// user credentials function with parameters defined
Usercredentials userObj("Miguel", 123);

void intro()
{
    cout << "\t\t -------------------------- \n\n";

    cout
        << "\t\t $$$ MIGUEL'S CHASE ATM $$$ " << endl;
    cout << "\t\t -------------------------- \n\n"
         << endl;
    cout << "Please Enter your Username: ";
    cin >> x;
}
// prompt options for user
void viewOption()
{
    cout << "[1] Withdraw Cash" << endl;
    cout << "[2] Deposit Cash" << endl;
    cout << "[3] View Your Current Balance" << endl;
    cout << "[4] Exit" << endl;
    cout << "[5] View Interest Accrued" << endl;
    cout << endl;
    cout << "Option: ";
    cin >> selection;
}
// asks user to deposit cash
void deposits()
{
    cout << "Deposit" << endl;
    cout << "Enter the Amount: ";
    cin >> deposit;
    startBalance = startBalance + deposit;
    cout << deposit << " was deposited to the balance" << endl;
    cout << "The remaining balance is: $" << startBalance << endl;
}
// current balance for user
void currentBalance()
{
    cout << "Current Balance" << endl;
    cout << "The current balance is: $" << startBalance << endl;
}

void exitATM()
{
    cout << "Exit" << endl;
    system("cls");
}
// uses the accrued interest forumula
//= (Daily interest rate) * (Days) * (Balance)
void interestAccrued()
{
    double interestAccrued = .01 * 30 * startBalance;
    cout << "Your 1% interest accrued for this month (30 days) is: $" << interestAccrued;
}

void choices()
{
    // if the userinput x is equal to the constructors userObj.userName which is Miguel
    if (x == userObj.userName)
    {
        cout << "Welcome to CHASE ATM \n";
        for (int i = 0; i < 3; i++)
        {
            cout << "Please Enter your Password: \n";
            cin >> y;
            double balance = 1700;
            startBalance = balance;

            if (y == userObj.password)
            {
                for (int x = 1; x < 10; x++)
                {
                    cout << endl;
                    if (x == 1)
                    {
                        cout << " -------------------------------------";

                        cout
                            << "\t\t ATM" << endl;
                        cout << "Your balance is: $" << startBalance << "\n\n";
                        interestAccrued();
                        cout << "\n\n";

                        cout << "Press a Number To Select option \n\n";
                    }
                    viewOption();
                    // use switch cases for the atm
                    switch (selection)
                    {
                    case 1:
                        cout << "Withdraw" << endl;
                        cout << "Enter the Amount: $";
                        cin >> withdraw;
                        // when withdrawn is greater than the starting balance then print message
                        if (withdraw > startBalance)
                        {
                            cout << "Sorry Insufficient Funds" << endl;
                            continue;
                        }
                        // when the withdrawn is negative then print message
                        if (withdraw < 0)
                        {
                            cout << "Negative entries are not allowed." << endl;
                            continue;
                        }
                        // the starting balance will be substracted with how much is withdrawn.
                        startBalance -= withdraw;
                        cout << withdraw << " was withdrawn from the balance" << endl;
                        cout << "The remaining balance is: $" << startBalance << endl;
                        continue;
                    case 2:
                        deposits();
                        continue;
                    case 3:
                        // This option allows user to check current balance
                        currentBalance();
                        continue;
                    case 4:
                        // This allows user to exit ATM
                        exitATM();
                        break;
                    case 5:
                        interestAccrued();

                        continue;
                    default:
                        cout << "Option is Invalid" << endl;
                        continue;
                    }
                    break;
                }
                break;
            }
            else if (i == 2)
            {
                cout << "Account locked" << endl;
            }
            else
            {
                cout << "Please Try Again" << endl;
            }
        }
    }
}
// Miguel Madrigal