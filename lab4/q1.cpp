//1. Write a program to add and subtract two-time objects of class type
// Time. Your program should contain hr, min, and sec as class data 
//members, void setdata() to set data and respective functions to 
//retrieve data; Time add(Time, Time) and Time subtract(Time, Time) to
// add and subtract respectively.
// Use another function to display data.




#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;


public:

    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }

    Time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void setData(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void displayData()
    {
        cout << "Time: " << hr << ":" << min << ":" << sec << endl;
    }

    Time add(Time t1, Time t2)
    {
        Time t;
        t.sec = t1.sec + t2.sec;
        t.min = t1.min + t2.min + t.sec / 60;
        t.sec = t.sec % 60;
        t.hr = t1.hr + t2.hr + t.min / 60;
        t.min = t.min % 60;
        return t;
    }

    Time subtract(Time t1, Time t2)
    {
        Time t;
        t.sec = t1.sec - t2.sec;
        if (t.sec < 0)
        {
            t.sec += 60;
            t.min--;
        }
        t.min = t1.min - t2.min;
        if (t.min < 0)
        {
            t.min += 60;
            t.hr--;
        }
        t.hr = t1.hr - t2.hr;
        return t;
    }
};

int main()
{
    Time t1(2, 30, 40), t2(1, 20, 30), t3, t4;
    t3 = t3.add(t1, t2);
    t4 = t4.subtract(t1, t2);
    t1.displayData();
    t2.displayData();
    t3.displayData();
    t4.displayData();
    return 0;
}

// Output:
// Time: 2:30:40
