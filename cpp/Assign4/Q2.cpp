#include <iostream>
using namespace std;
class student
{
    string name;
    char gender;
    static int roll;
    int marks[3];

public:
    student()
    {
        roll++;
    }
    student(string name, bool gender, int roll)
    {
        this->name = name;
        this->gender = gender;
        this->roll = roll;
    }
    int getroll()
    {
        return roll;
    }
    void print()
    {
        cout << "your name is" << name << endl;
        cout << "your roll number is" << roll << endl;
        cout << "gender is" << gender << endl;
        cout << "your percentage is " << percentage() << "%" << endl;
    }
    void accept()
    {
        cout << "enter your name ";
        cin >> name;
        cout << "enter your gender (only type m/f)";
        cin >> gender;
        cout << "enter marks of three subject";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    float percentage()
    {
        int totalmarks = 0;
        for (int i = 0; i < 3; i++)
        {
            totalmarks = totalmarks + marks[i];
        }
        return totalmarks / 3;
    }
};
int student::roll = 0;
int main()
{
    student *arr[5];
    int choice;
    do
    {
        cout << "Select any" << endl;
        cout << "1.Enter student details" << endl;
        cout << "2.print student details" << endl;
        cout << "3.sort the details" << endl;
        cout << "4.Search the details" << endl;
        
        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;

        default:
            break;
        }
    } while (/* condition */);

    return;
}