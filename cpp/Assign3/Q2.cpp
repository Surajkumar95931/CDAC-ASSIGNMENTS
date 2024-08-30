#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int min;
    int sec;

public:
    // Time() : hour(0), min(0), sec(0) {}
    Time(){
        hour=0;
        min=0;
        sec=0;
    }
    Time(int hour, int min, int sec)
    {
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    // Getters
    int getHour() const
    {
        return hour;
    }

    int getMinute() const
    {
        return min;
    }

    int getSeconds() const
    {
        return sec;
    }

    // Setters
    void setHour(int hour)
    {
        this->hour = hour;
    }

    void setMinute(int min)
    {
        this->min = min;
    }

    void setSeconds(int sec)
    {
        this->sec = sec;
    }

    void printTime() const
    {
        cout << "Time is: " << hour << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of Time objects: ";
    cin >> n;

    Time *times = new Time[n]; // Dynamically allocate memory for an array of Time objects

    for (int i = 0; i < n; ++i)
    {
        int h, m, s;
        cout << "Enter hour, minute, and second for object " << i + 1 << ": ";
        cin >> h >> m >> s;
        times[i].setHour(h);
        times[i].setMinute(m);
        times[i].setSeconds(s);
    }

    // Print time for each object
    for (int i = 0; i < n; ++i)
    {
        cout << "Time object " << i + 1 << ": ";
        times[i].printTime();
    }

    delete[] times;

    return 0;
}
