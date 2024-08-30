#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address() : building(""), street(""), city(""), pin(0) {}

    // Parameterized constructor
    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    // Setter
    void setBuilding(string building)
    {
        this->building = building;
    }

    void setStreet(string street)
    {
        this->street = street;
    }

    void setCity(string city)
    {
        this->city = city;
    }

    void setPin(int pin)
    {
        this->pin = pin;
    }

    // Getter
    string getBuilding() const
    {
        return building;
    }

    string getStreet() const
    {
        return street;
    }

    string getCity() const
    {
        return city;
    }

    int getPin() const
    {
        return pin;
    }

    void accept()
    {
        cout << "Enter your building name: ";
        getline(cin, building); // Using getline to handle spaces in input
        cout << "Enter your street name: ";
        getline(cin, street);
        cout << "Enter your city name: ";
        getline(cin, city);
        cout << "Enter your pin code: ";
        cin >> pin;
    }

    void display() const
    {
        cout << "\nAddress Details:\n";
        cout << "Building: " << building << endl;
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "Pin Code: " << pin << endl;
    }
};

int main()
{
    Address addr1;

    addr1.accept();
    addr1.display();

    // Test parameterized constructor
    Address addr2("Block A", "hinjewadi", "pune", 411057);
    addr2.display();

    addr1.setBuilding("Block B");
    addr1.setStreet("surat");
    addr1.setCity("surat");
    addr1.setPin(12345);

    cout << "\nUpdated  Details:\n";
    cout << "Building: " << addr1.getBuilding() << endl;
    cout << "Street: " << addr1.getStreet() << endl;
    cout << "City: " << addr1.getCity() << endl;
    cout << "Pin Code: " << addr1.getPin() << endl;

    return 0;
}
