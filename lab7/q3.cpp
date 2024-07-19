//3. Toadd two Time objects using operator overloading using non member function


#include<iostream>

using namespace std;


class Time
{
    public:
        int hours, minutes, seconds;
        Time()
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time(int h, int m, int s)
        {
            hours = h;
            minutes = m;
            seconds = s;
        }
        void display()
        {
            cout << "Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds << endl;
        }
};

// Non member function , which is not a member of the class

Time operator+(Time t1, Time t2)
{
    Time t;
    t.seconds = t1.seconds + t2.seconds;
    t.minutes = t1.minutes + t2.minutes + (t.seconds / 60);
    t.seconds %= 60; // it will give the remainder of the division so that it will be less than 60
    t.hours = t1.hours + t2.hours + (t.minutes / 60);
    t.minutes %= 60; // it will give the remainder of the division so that it will be less than 60

    return t;
}

int main()
{
    Time t1(2, 45, 30), t2(3, 30, 30), t3;
    t3 = t1 + t2; // t3 = operator+(t1, t2) // operator+(t1, t2) is a non member function
    
    t1.display();
    t2.display();
    t3.display();


    int x;
    cin >> x;

    return 0;
}

