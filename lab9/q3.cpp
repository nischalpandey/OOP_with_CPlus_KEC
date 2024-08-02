// Create a class named Employee (name, address, input() and display()) and class named Teacher (subjecttaught, post, input() and display()). Derive a class YearCoordinator(year, faculty, input() and display()) from Employee and Teacher.
#include<iostream>

using namespace std;

class Employee
{
    protected:
    string name;
    string address;
    public:
    void input()
    {
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"Enter the address of the employee: ";
        cin>>address;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

class Teacher 
{
    protected:
    string subjecttaught;
    string post;
    public:
    void input()
    {
       
        cout<<"Enter the subject taught by the teacher: ";
        cin>>subjecttaught;
        cout<<"Enter the post of the teacher: ";
        cin>>post;
    }
    void display()
    {

        cout<<"Subject taught: "<<subjecttaught<<endl;
        cout<<"Post: "<<post<<endl;
    }
};

class YearCoordinator:public Employee, public Teacher //   Deriving class YearCoordinator from class Employee and Teacher with members year and faculty
{
    protected:
    int year;
    string faculty;
    public:
    void input()
    {
        Employee::input();
        Teacher::input();
        cout<<"Enter the year of the coordinator: ";
        cin>>year;
        cout<<"Enter the faculty of the coordinator: ";
        cin>>faculty;
    }
    void display()
    {
        Employee::display();
        Teacher::display();
        cout<<"Year: "<<year<<endl;
        cout<<"Faculty: "<<faculty<<endl;
    }
};

int main()
{
    YearCoordinator yc;
    yc.input();
    yc.display();


    int x;
    cin>>x;

    return 0;
}



