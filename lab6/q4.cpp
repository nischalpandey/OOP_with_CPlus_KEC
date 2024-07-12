//  Write a program to swap two numbers of private data members of two different classes. Using the concept of friend function.

#include <iostream>
#include<conio.h>

using namespace std;

class B;

class A
{
    private:
        int a;
    public:
        void getdata()
        {
            cout << "Enter the value of a: ";
            cin >> a;
        }
        void display()
        {
            cout << "a: " << a << endl;
        }
        friend void swap(A &, B &);
};

class B
{
    private:
        int b;
    public:
        void getdata()
        {
            cout << "Enter the value of b: ";
            cin >> b;
        }
        void display()
        {
            cout << "b: " << b << endl;
        }
        friend void swap(A &, B &);
};

void swap(A &x, B &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    A a;
    B b;
    a.getdata();
    b.getdata();
    cout << "Before swapping: " << endl;
    a.display();
    b.display();
    swap(a, b);
    cout << "After swapping: " << endl;
    a.display();
    b.display();
    getch();
    return 0;
}
