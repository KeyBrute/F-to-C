/**------------------------------------------

    Program 3: Password Check

    Course: CS 141, Fall 2022.
    System: Windows 10 and Visual Studio code
    Starter Code Author: Dr. Sara Riazi
    Student Author: Miguel Madrigal
-------------------------------------------*/

#include <iostream> // for cin and cout
#include <string>
#include <fstream>
#include <bits/stdc++.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

const string rule_msg_1 = "The selected password must be at least eight characters long.";
const string rule_msg_2 = "The selected password must have at least one uppercase letter.";
const string rule_msg_3 = "The selected password must have at least one lowercase letter.";
const string rule_msg_4 = "The selected password must have at least one digit.";
const string rule_msg_5 = "The selected password must have at least one of special characters: [@,!,#,^,&,*,$]";
const string rule_msg_6 = "The selected password has been leaked.";
const string rule_msg_7 = "The selected password cannot contain a dictionary word..";

/****
 * Runs the main part of the program
 ****/
int run(string leaked_password_file, string english_word_file)
{
    // cout << "Enter password: ";
    // string userName = "";
    // cin >> userName;
    // // int counts[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    // // int total = 0;
    // if (userName.length() < 8)
    // {
    //     cout << "The selected password must be at least eight characters long" << endl;
    //     // for (int i = 0; i < userName.length(); i++)
    //     // {
    //     //     if (isdigit(userName[i], log))
    //     //     {
    //     //         int idx = (int)userName[i];
    //     //         counts[idx]++;
    //     //         total++;
    //     //     }
    //     //     cout << "The selected password must have at least one digit. " << endl;
    //     // }
    // }
    fstream file;
    string word, t, q, filename;

    // filename of the file
    filename = english_word_file;

    // opening file
    file.open(filename.c_str());

    // extracting words from the file
    while (file >> word)
    {
        // displaying content
        if (word.length() <= 8)
        {
            cout << word << endl;
        }
    }
    return 0;
};

int main()
{
    /** Change the address of the files appropriatly based on your local machine.
     * This main function will be replaced during testing. Do not add any line of code to the main function
     **/

    string leaked_password_file = "password leak.txt"; // change this based on the location of the file on your machine
    string english_word_file = "words_5.txt";          // change this based on the location of the file on your machine
    run(leaked_password_file, english_word_file);
    return 0;
}