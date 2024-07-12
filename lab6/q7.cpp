
// 7. In program 3, add member int id, static void showcount() to display count, void setdata(int) to
// set id and void displayid() to display id and illustrate the working of static object and static function.
#include<iostream>
using namespace std;



class MeroClass
{
private:
static int count;

public:
    MeroClass();

    static void showcount()
    {
        cout<<"Count is: "<<count<<endl;
    }

    void setdata(int x)
    {
        count = x;
    }

    ~MeroClass();
};

int MeroClass::count ;


MeroClass::MeroClass()
{

count++;
cout<<"We are in constructor"<<count<<endl;







}

MeroClass::~MeroClass()
{


cout<<"We are in destructor"<<count<<endl;
count--;
}


int main()
{

MeroClass obj1 , obj2;
obj1.setdata(10);
obj1.showcount();

// Normal Obj le Static function call garna mildaina

MeroClass::showcount(); // static function call garna mildaina





// static obj
static MeroClass obj3;
obj3.showcount();





int x;
cin>>x;

return 0;
}

