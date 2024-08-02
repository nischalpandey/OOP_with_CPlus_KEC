
// multilevel inheritance default and parameterized constructor
#include <iostream>

using namespace std;

class ClassA{
    public:
    ClassA(){
        cout<<"Hello ClassA const"<<endl;
    }
    ClassA(int a){
        cout<<"Hello ClassA const with parameter "<<a<<endl;
    }
};

class ClassB: public ClassA{
    public:
    ClassB(){
        cout<<"Hello ClassB const"<<endl;
    }
    ClassB(int a){
        cout<<"Hello ClassB const with parameter "<<a<<endl;
    }
};

class ClassC: public ClassB{
    public:
    ClassC(){
        cout<<"Hello ClassC const"<<endl;
    }
    ClassC(int a){
        cout<<"Hello ClassC const with parameter "<<a<<endl;
    }
};

int main(){
    ClassC obj;
    ClassC obj1(10);
    return 0;
}
// Output: Hello ClassA const
//...