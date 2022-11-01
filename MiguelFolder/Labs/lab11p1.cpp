#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Student
{
public:
    // Problem 1
    // The default constructor
    // Set first as "unset_first_name"
    // Set last as "unset_last_name"
    // Set age and creditHours as -1, uin as 0
    Student()
    {
        this->first = "unset_first_name";
        this->last = "unset_last_name";
        this->age = -1;
        this->creditHours = -1;
        this->uin = 0;
    };

    // Do not modify this.
    Student(int newAge, int newCreditHours) : Student()
    {
        this->age = newAge;
        this->creditHours = newCreditHours;
    }

    // Define these setters and getters.
    void setName(string newFirst, string newLast)
    {
        this->first = newFirst;
        this->last = newLast;
    }

    void setAge(int newAge)
    {
        age = newAge;
    }

    void setCreditHours(int newCreditHours)
    {
        creditHours = newCreditHours;
    }

    void setUin(unsigned long newUin)
    {
        uin = newUin;
    }
    int getAge()
    {
        return -1;
    }

    int getCreditHours()
    {
        return -1;
    }

    // Do not modify this
    void selfIntroduce()
    {
        cout << "My name is " << this->first << " " << this->last << ". \n";
        cout << "I am " << this->age << " years old. " << endl;
        cout << "My UIN is " << this->uin << ". \n";
        cout << "I have taken " << this->creditHours << " credit hours. " << endl;
    }

    // Problem 2

    // The fully qualified constructor
    // Set fields with parameters
    Student(string newFirst, string newLast, int newAge, int newCreditHours, unsigned long newUin)
    {
    }
    // The copy constructor
    // Append "_clone" as suffix of the first name.
    // Increase the UIN by 1.
    // Keep other fields the same as the parameter's
    Student(const Student &stu)
    {
    }

private:
    string first;
    string last;
    unsigned long uin;
    int creditHours;
    int age;
};

// Problem 3
// Returns the average age of the students with at least 50 credit hours.
// Returns -1 if no such students.
double averageAgeWith50Hours(vector<Student> &students)
{
    double avgAge = -1;

    return avgAge;
}

// You should not change the code below this point.
// All your changes should be inside the individual functions shown above.

void introduceByValue(Student stu)
{
    stu.selfIntroduce();
}

void introduceByRef(Student &stu)
{
    stu.selfIntroduce();
}

void problem1()
{
    cout << "Please input the new students first name, last name, age, credit hours and UIN, separated by a space. \n";
    string first, last;
    int uin, hours, age;
    cin >> first >> last >> age >> hours >> uin;
    Student stuA;
    stuA.selfIntroduce();
    stuA.setName(first, last);
    stuA.setAge(age);
    stuA.setCreditHours(hours);
    stuA.setUin(uin);
    stuA.selfIntroduce();
}

void problem2()
{
    cout << "Please input the new students first name, last name, age, credit hours and UIN, separated by a space. \n";
    string first, last;
    int uin, hours, age;
    cin >> first >> last >> age >> hours >> uin;
    Student stuA(first, last, age, hours, uin);
    introduceByRef(stuA);
    introduceByValue(stuA);
}

void problem3()
{
    int stuNum;
    cout << "Please input the number of students. \n";
    cin >> stuNum;
    vector<Student> students;
    for (int i = 0; i < stuNum; i++)
    {
        cout << "Please input the age and credit hours of the next student, separated by a space. \n";
        int newAge, newCreditHours;
        cin >> newAge >> newCreditHours;
        Student newStu(newAge, newCreditHours);
        students.push_back(newStu);
    }

    double avg = averageAgeWith50Hours(students);
    cout << fixed << setprecision(2);
    cout << "The average age of students with at least 50 credit hours is " << avg << endl;
}

int main()
{
    int menuOption = 0;

    while (menuOption != -1)
    {
        cout << "Enter which problem to run. Enter -1 to end: \n";
        cin >> menuOption;
        switch (menuOption)
        {
        case 1:
            problem1();
            break;
        case 2:
            problem2();
            break;
        case 3:
            problem3();
            break;
        }
    }

    cout << "Done." << endl;
    return 0;
} // end main()