//
// Write a program to add two distance objects with members' feet and inches using the concept of passing objects as an argument to function.


#include <iostream>
using namespace std;



class Distance
{


private:
    int feet, inches;

    public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }



    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }


    void setData(int f, int i)
    {
        feet = f;
        inches = i;
    }

    void displayData()
    {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    Distance add(Distance d1, Distance d2)
    {
        Distance d;
        d.inches = d1.inches + d2.inches;
        d.feet = d1.feet + d2.feet + d.inches / 12;
        d.inches = d.inches % 12;
        return d;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.setData(5, 6);
    d2.setData(7, 8);
    d3 = d3.add(d1, d2);
    d3.displayData();
    int x;
    cin >> x;
    return 0;
}
