
// Write a program to show order of the constructor and 
//destructor using static data member for
//count.

#include<iostream>
using namespace std;



class MeroClass
{
private:
static int count;

public:
    MeroClass();
    ~MeroClass();
};

int MeroClass::count = 8;


MeroClass::MeroClass()
{

count++;
cout<<"We are in constructor"<<count<<endl;







}

MeroClass::~MeroClass()
{

count--;
cout<<"We are in destructor"<<count<<endl;

}


int main()
{

MeroClass obj1 , obj2;


int x;
cin>>x;

return 0;
}

