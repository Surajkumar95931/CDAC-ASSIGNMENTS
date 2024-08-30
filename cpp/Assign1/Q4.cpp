#include <iostream>
#include <string>
using namespace std;

namespace Nstu
{

    class student
    {
        int roll;
        string name;
        int marks;

    public:
        void initStud()
        {
            roll = 0;
            name = "NA";
            marks = 0.0;
        }
        void acceptStudentFromConsole()
        {
            cout << "Enter Roll No: ";
            cin >> roll;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Marks: ";
            cin >> marks;
        }
        void printStudentOnConsole()
        {
            cout << "\nStudent Details:\n";
            cout << "Roll No: " << roll << "\n";
            cout << "Name: " << name << "\n";
            cout << "Marks: " << marks << "\n";
        }
    };
}
int main()
{
    Nstu::student s1;
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();

    return 0;
}
