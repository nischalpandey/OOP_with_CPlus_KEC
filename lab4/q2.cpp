// 2. Write a program to show the working order of 
//different constructors and destructors. 


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
    
        Animal()
        {
            cout << "Default constructor called" << endl;
        }
    
        Animal(char n[], int id, float c)
        {
            cout << "Parameterized constructor called" << endl;
            strcpy(name, n);
            id_number = id;
            cost = c;
        }
    
        ~Animal()
        {
            cout << "Destructor called" << endl;
        }
    
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

