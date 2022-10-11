#include <iostream>
using namespace std;
// function definition
void getVowels(string sname)
{
    for (int i = 0; i < sname.length(); i++)
    {
        // checking if charecter is vowel or not
        if (sname[i] == 'a' or sname[i] == 'e' or sname[i] == 'i' or sname[i] == 'o' or sname[i] == 'u' or sname[i] == 'A' or sname[i] == 'E' or sname[i] == 'I' or sname[i] == 'O' or sname[i] == 'U')
        {
            // if the character is vowel then print
            cout << sname[i];
        }
    }
}

int main(int argc, char *argv[])
{
    // declaring string
    string sname;
    cout << "Enter Enter a string: " << endl;
    cin >> sname;
    cout << "The vowels in the string are:" << endl;
    // calling getVowels function
    getVowels(sname);
}
