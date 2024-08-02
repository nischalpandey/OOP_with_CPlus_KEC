// CODE: Nischal 
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

class Engineer: virtual public person
{   
    protected:
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


class Doctor:virtual public person{ //   Deriving class Doctor from class Engineer with members area and license_number_nmc
string area;
int license_number_nmc;
public:
void setdata()
{
    
    cout<<"Enter the area of the doctor: ";
    cin>>area;
    cout<<"Enter the license number of the doctor: ";
    cin>>license_number_nmc;
        }

void display()
{
   
    cout<<"Doctor Area: "<<area<<endl;
    cout<<"Doctor License number: "<<license_number_nmc<<endl;
}
};

class Learner:  public Doctor , public Engineer {
    public:
    void setdata(){
    Doctor::setdata();
    Engineer::setdata();
      
    }

    void display(){  

    Doctor::display();
    Engineer::display();
       
    }



};



int main()
{
    Learner d;
    d.setdata();
    d.display();
    int x;
    cin>>x;
    return 0;





}



// Descussion: 

