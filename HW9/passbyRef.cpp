#include <iostream>
using namespace std;

bool ScaleGrade(int total, char &grade)
{
    if (total >= 65 && total < 80 && grade != 'C')
    {
        grade = 'C';
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int studentScore;
    char studentGrade;
    bool isChanged;

    cin >> studentScore;
    cin >> studentGrade;

    isChanged = ScaleGrade(studentScore, studentGrade);

    if (isChanged)
    {
        cout << "Grade is " << studentGrade << " after curving." << endl;
    }
    else
    {
        cout << "Grade " << studentGrade << " is not changed." << endl;
    }

    return 0;
}