/*
Q1.Create a class called Employee with three data members (empno, name, address)
 a method called readdata() to take in the details of the employee from user, 
 and a function called displaydata() to display the details of the employee. 
 In main create two objects of class Employee and for each object call the readdata() and 
 displaydata() methods.
*/

#include<iostream>
using namespace std;


class Employee
{
    private:
        int empno;
        string name;
        string address;
    public:
        void readdata()
        {
            cout<<"Enter Employee Number: ";
            cin>>empno;
            cout<<"Enter Employee Name: ";
            cin>>name;
            cout<<"Enter Employee Address: ";
            cin>>address;
        }
        void displaydata()
        {
            cout<<"Employee Number: "<<empno<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Address: "<<address<<endl;
        }
};


int main(){

Employee e1, e2;
e1.readdata();
e1.displaydata();
e2.readdata();
e2.displaydata();
 int a;
    cin>>a;

return 0;

}

