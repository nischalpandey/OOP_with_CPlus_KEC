// Initiate the working of the constructor with the default argument.

#include <iostream>

using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    Time(int h = 0, int m = 0, int s = 0)
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
    Time t1, t2, t3;
    t1.setData(5, 6, 7);
    t2.setData(1, 2, 3);
    t3 = t3.add(t1, t2);
    t3.displayData();
    t3 = t3.subtract(t1, t2);
    t3.displayData();
    int x;
    cin >> x;
    return 0;
}



