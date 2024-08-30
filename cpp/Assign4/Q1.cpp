#include <iostream>
#include <string>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date()
    {
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDate()
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void getDate() const
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
    string name;
    string address;
    Date birthday;

public:
    Person()
    {
    }

    Person(string name, string address, Date birthday)
    {
        this->name = name;
        this->address = address;
        this->birthday = birthday;
    }

    void setPerson()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your address: ";
        cin >> address;
        cout << "Enter your birthday:";
        birthday.setDate();
    }

    void print() const
    {
        cout << "your details is\n";
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birthday: ";
        birthday.getDate();
    }
};

int main()
{
    Date d;
    // d.setDate();
    // d.getDate();

    Person p;
    p.setPerson();
    p.print();

    return 0;
}
