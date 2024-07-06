/*

4. Write a program to illustrate classes with an inline function outside class.

*/



#include<iostream>
using namespace std;

class Student
{
    private:
        int rollno;
        string name;
        string address;
    public:
        void readdata();
        void displaydata();
};

inline void Student::readdata()
{
    cout<<"Enter Roll Number: ";
    cin>>rollno;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Address: ";
    cin>>address;
}

inline void Student::displaydata()
{
cout << "\n-----------Inline Function with class--------\n";
    cout<<"Roll Number: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
}

int main()
{
    Student s1;
    s1.readdata();
    s1.displaydata();
    int a;
    cin>>a;
    return 0;
}
