#include <iostream>
using namespace std;

class Volume
{
    int length;
    int breadth;
    int height;

public:
    Volume()
    {
        length = 2;
        breadth = 2;
        height = 2;
    }

    Volume(int val)
    {
        length = val;
        breadth = val;
        height = val;
    }

    Volume(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    void Volumefind()
    {
        int vol = length * breadth * height;
        cout << "The volume of the box is: " << vol << endl;
    }
};

int main()
{
    int choice;

    do
    {

        cout << "1. Calculate Volume with default values\n";
        cout << "2. Calculate Volume with length, breadth and height with the same value\n";
        cout << "3. Calculate Volume with different length breadth and height values\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Volume v1;
            v1.Volumefind();
            break;
        }
        case 2:
        {
            int val;
            cout << "Enter the value for length, breadth, and height";
            cin >> val;
            Volume v2(val);
            v2.Volumefind();
            break;
        }
        case 3:
        {
            int l, b, h;
            cout << "Enter length, breadth, and height ";
            cin >> l >> b >> h;
            Volume v3(l, b, h);
            v3.Volumefind();
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
