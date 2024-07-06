/*
6. Construct
a class named "Animal" with data and methods as follows: Data: 
name, id_number, cost
Methods: void setdata(char, int, float); and void showdata();
Create two different objects of type "Animal". Use the method setdata (...) to set the data members' value and use the method showdata) to display them. Illustrate the use 
of different access specifiers in this program.*/


#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
private:
    char name[20];
    int id_number;
    float cost;

public:

    void setData(char n[], int id, float c)
    {
        strcpy(name, n);
        id_number = id;
        cost = c;
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id_number << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main()
{
    Animal a1, a2;
    a1.setData("Dog", 1, 1000);
    a2.setData("Cat", 2, 500);
    a1.showData();
    a2.showData();
    int x;
    cin >> x;
    
    return 0;
}
