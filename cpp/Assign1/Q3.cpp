#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void initStud()
    {
        rollNo = 0;
        name = "Unnamed";
        marks = 0.0;
    }

    void acceptStud()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        // cin.ignore(); // To clear the input buffer before using getline

        cout << "Enter Name: ";
        cin>>name;                  // getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void printStud()
    {
        cout << "\nStudent Details:\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

int main()
{
    Student s1;
    int choice;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Initialize Student\n";
        cout << "2. Accept Student Data from Console\n";
        cout << "3. Print Student Data on Console\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s1.initStud();
            cout << "Student data initialized.\n";
            break;
        case 2:
            s1.acceptStud();
            break;
        case 3:
            s1.printStud();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
