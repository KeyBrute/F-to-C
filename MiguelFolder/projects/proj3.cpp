/**------------------------------------------

    Program 3: PassuserInput Check

    Course: CS 141, Fall 2022.
    System: Mac and Visual Studio code
    Starter Code Author: Dr. Sara Riazi
    Student Author: Miguel Madrigal
-------------------------------------------*/

#include <iostream> // for cin and cout
#include <string>
#include <fstream>

using namespace std;

const string rule_msg_1 = "The selected password must be at least eight characters long.";
const string rule_msg_2 = "The selected password must have at least one uppercase letter.";
const string rule_msg_3 = "The selected password must have at least one lowercase letter.";
const string rule_msg_4 = "The selected password must have at least one digit.";
const string rule_msg_5 = "The selected password must have at least one of special characters: [@,!,#,^,&,*,$]";
const string rule_msg_6 = "The selected password has been leaked.";
const string rule_msg_7 = "The selected password cannot contain a dictionary word.";

/****
 * Runs the main part of the program
 ****/
int run(string leaked_password_file, string english_leak_file)
{
    string userInput, leak, line;
    ifstream filename(leaked_password_file);
    int offset;
    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, specialChar = false;
    bool minLength = true;
    bool accept = true;

    bool match = false;

    cout << "Enter password: ";
    cin >> userInput;
    // extract word from file
    int n = userInput.length();
    // Check lower alphabet in string
    string normalChars = "abcdefghijklmnopqrstu"
                         "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
    if (filename.is_open())
    {
        while (!filename.eof())
        {
            getline(filename, line);
            if ((leaked_password_file.compare(userInput)) == 0)
            {
                cout << rule_msg_6 << endl;
                accept = false;

                filename.close();
            }
        }
        filename.close();
    }

    if (n < 8)
    {
        minLength = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (isupper(userInput[i]))
            hasUpper = true;
        if (islower(userInput[i]))
            hasLower = true;
        if (isdigit(userInput[i]))
            hasDigit = true;
        size_t special = userInput.find_first_not_of(normalChars);
        if (special != string::npos)
            specialChar = true;
    }

    if (minLength != true)
    {
        cout << rule_msg_1 << endl;
        accept = false;
    }
    if (hasUpper != true)
    {
        cout << rule_msg_2 << endl;
        accept = false;
    }
    if (hasLower != true)
    {
        cout << rule_msg_3 << endl;
        accept = false;
    }
    if (hasDigit != true)
    {
        cout << rule_msg_4 << endl;
        accept = false;
    }
    if (specialChar != true)
    {
        cout << rule_msg_5 << endl;
        accept = false;
    }

    // while (!filename.eof())
    // {
    //     filename >> leak;
    //     if (userInput == leak)
    //     {
    //         cout << rule_msg_6 << endl;
    //         accept = false;
    //     }
    // }
    if (accept)
    {
        cout << "Password accepted!" << endl;
    }
    else
    {
        cout << "Password rejected" << endl;
    }
    return 0;
};

int main()
{
    /** Change the address of the files appropriatly based on your local machine.
     * This main function will be replaced during testing. Do not add any line of code to the main function
     **/
    string leaked_password_file = "password leak.txt"; // change this based on the location of the file on your machine
    string english_leak_file = "5 word.txt";           // change this based on the location of the file on your machine
    run(leaked_password_file, english_leak_file);
    return 0;
}
