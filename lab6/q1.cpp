/*

1. Write a program to show the concept of DMA for objects and an array of objects.
*/

#include <iostream>
#include<conio.h>

using namespace std;


class Student
{
    private:
        int roll;
        char name[20];
    public:
        void getdata()
        {
            cout << "Enter the roll number: ";
            cin >> roll;
            cout << "Enter the name: ";
            cin >> name;
        }
        void display()
        {
            cout << "Roll number: " << roll << endl;
            cout << "Name: " << name << endl;
        }
};

int main()
{
    Student *s1 = new Student;
    s1->getdata();
    s1->display();
    delete s1;
    /// for array
    Student *s2 = new Student[2];
    for (int i = 0; i < 2; i++)
    {
        s2[i].getdata();
    }
    for (int i = 0; i < 2; i++)
    {
        s2[i].display();
    }
    delete[] s2;

    getch();
    return 0;
}



