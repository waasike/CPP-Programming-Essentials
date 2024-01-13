#include <iostream>
using namespace std;
struct student
{
    string studentName[45];
    int studentAge;
    float studentGpa;
    char studentGrade;
};

int main()
{

    student s;

    cout << "Enter your name: ";
    // cin.get(s.studentName,45);
    getline(cin, s.studentName[0]);
    cout<<"Your name is "<<s.studentName[0]<<endl;

    cout << "Enter your age: ";
    cin >> s.studentAge;
    cout<<"Your are "<<s.studentAge<<" years old"<<endl;

    cout << "Enter your GPA: ";
    cin >> s.studentGpa;
    cout<<"Your gpa is "<<s.studentGpa<<endl;

    cout << "Enter your grade: ";
    cin >> s.studentGrade;
    cout<<"Your grade is "<<s.studentGrade<<endl;

    if (s.studentGrade == 'A' || s.studentGrade == 'B')
    {
        cout << "You Passed!";
    }
    else if (s.studentGrade == 'C' || s.studentGrade == 'D')
    {
        cout << "Average";
    }
    else if (s.studentGrade == 'E' || s.studentGrade == 'F')
    {
        cout << "FAIL!" << endl;
    }
}