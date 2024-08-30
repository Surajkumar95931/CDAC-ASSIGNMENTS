#include <iostream>
using namespace std;

class Cylinder
{
    double radius;
    double height;
    static const double pi;

public:
// Cylinder() : radius(0), height(0) {}
   Cylinder(){
    radius=0;
    height=0;
   }


    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }

    double calculateVolume() const
    {
        return pi * radius * radius * height;
    }
    // setters
    void setRadius(double radius)
    {
        this->radius = radius;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

    // getters
    double getRadius()
    {
        return radius;
    }

    double getHeight()
    {
        return height;
    }
};

const double Cylinder::pi = 3.14;

int main()
{
    Cylinder v1;
    v1.setHeight(11);
    v1.setRadius(2);

    double result = v1.calculateVolume();
    cout << "Volume of cylinder is: " << result << endl;

    return 0;
}
