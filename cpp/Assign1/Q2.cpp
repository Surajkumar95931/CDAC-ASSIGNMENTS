#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2020;
    }
    void printDate()
    {
        // cout << "Date: " << (day < 10 ? "0" : "") << day << "/"
        //      << (month < 10 ? "0" : "") << month << "/"
        //      << year << endl;
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
    void accept()
    {
        cout << "enter the day" << endl;
        cin >> day;
        cout << "enter the month" << endl;
        cin >> month;
        cout << "enter the year" << endl;
        cin >> year;
    }
    bool LeapYear()
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};
int main()
{
    Date d1;
    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date from Console\n";
        cout << "3. Print Date on Console\n";
        cout << "4. Check if Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.accept();
            break;
        case 3:
            d1.printDate();
            break;
        case 4:
            if (d1.LeapYear())
                cout << d1.year << "is a leap year";
            else
                cout << d1.year << "is not a leap year";
            break;
        case 5:
            cout << "exiting";
            break;
        default:
            cout << "your choice is not present sorry";
        }
    } while (choice != 5);

    return 0;
}