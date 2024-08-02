//Program :  Create a class named person with member- name, address, setdata() and display() and derive a class named Engineer with members faculty, license_number and display(). Make your program meaningful.

#include<iostream>

using namespace std;

class person
{
    protected: // making the members protected so that they can be accessed by the derived class
    string name;
    string address;
    public:
    void setdata()
    {
        cout<<"Enter the name of the person: ";
        cin>>name;
        cout<<"Enter the address of the person: ";
        cin>>address;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

//    Deriving class Engineer from class person with members faculty and license_number

class Engineer:public person
{
    string faculty;
    int license_number;
    public:
    void setdata()
    {
        person::setdata(); // calling setdata() of class person
        cout<<"Enter the faculty of the engineer: ";
        cin>>faculty;
        cout<<"Enter the license number of the engineer: ";
        cin>>license_number;
    }
    void display()
    {
        person::display(); // calling display() of class person
        cout<<"Faculty: "<<faculty<<endl;
        cout<<"License number: "<<license_number<<endl;
    }
};



int main()
{
    Engineer e;
    e.setdata();
    e.display();
    int x;
    cin>>x;
    return 0;
}



// Descussion: The class person is a base class and the class Engineer is a derived class. The class person has two members name and address and two member functions setdata() and display(). The class Engineer has two members faculty and license_number and two member functions setdata() and display(). The class Engineer is derived from the class person. The members of the class person are protected so that they can be accessed by the derived class. The member functions setdata() and display() of the class person are called in the member functions setdata() and display() of the class Engineer using the scope resolution operator. The object of the class Engineer is created in the main function and the member functions setdata() and display() are called using the object. The output of the program is the name, address, faculty and license number of the engineer. The program is meaningful as it shows the details of an engineer.
