#include <iostream>
#include <conio.h>
using namespace std;

class MeroClass
{
private:    
    string name;
    int roll;
public:
    MeroClass(
    
    
    );
    ~MeroClass();

 void printhello(bool isem = false){
 isem?
 cout<<"Hello from implicit call":
 cout<<"Hello from explicit";

 
 }

};

MeroClass::MeroClass(/* args */)
{

cout<<"------------------------"<<endl;

}

MeroClass::~MeroClass()
{


cout<<endl;
}






int main()
{
MeroClass().printhello(true);

MeroClass myobj ;
myobj.printhello();



getch();

    return 0;
}

