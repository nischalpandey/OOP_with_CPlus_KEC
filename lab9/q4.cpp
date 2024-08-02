//4. Create a class named Course (coursename, studentname, and input()). Then, create class named Engineering (collegename, totalseats and input()) derived from course and another class named BEI(totalsubjects, input() and display()) derived from Engineering.

#include<iostream>


using namespace std;

class Course
{

public:
    string course_name;
    string studentname;

    void input()
    {
        cout<<"Enter the name of the course: ";
        cin>>course_name;
        cout<<"Enter the name of the student: ";
        cin>>studentname;
    }
 



};


class Engineering : public Course
{
    protected:
    string collegename;
    int totalseats;
    public:
    void input()
    {
        Course::input();
        cout<<"Enter the name of the college: ";
        cin>>collegename;
        cout<<"Enter the total number of seats: ";
        cin>>totalseats;
    }
};

class BEI:public Engineering //  Deriving class BEI from class Engineering
{
    protected:
    int totalsubjects;
    public:
    void input()
    {
        Engineering::input();
        cout<<"Enter the total number of subjects: ";
        cin>>totalsubjects;
    }
    void display()
    {
        cout<<"Course name: "<<course_name<<endl; // We can access the members of the base class using the derived class 
        cout<<"Student name: "<<studentname<<endl;
        cout<<"College name: "<<collegename<<endl;
        cout<<"College name: "<<collegename<<endl;
        cout<<"Total seats: "<<totalseats<<endl;
        cout<<"Total subjects: "<<totalsubjects<<endl;
    }
};

int main()
{
    BEI b;
    b.input();
    b.display();

int x;
cin>>x;

    return 0;
}
